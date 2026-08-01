struct Node{

    int key;
    int value;
    struct Node*next;
};

class MyHashMap {

private:
    Node*head;
    Node*tail;

public:
    MyHashMap() {
        
            head=nullptr;
            tail=nullptr;

    }
private:
    Node* createnode(int key,int value)
    {
        Node*newnode=new Node();
        newnode->key=key;
        newnode->value=value;
        newnode->next=nullptr;
        return newnode;
    }
public:
    
    void put(int key, int value) {

         if(head==nullptr)
         {
             Node*newnode=createnode(key,value);
             head=newnode;
             return;
         }
         Node*temp=head;
         while(temp!=nullptr)
         {
              if(temp->key==key)
              {
                  temp->value=value;
                  return;
              }
              else if(temp->next==nullptr)
              {
                 Node*newnode=createnode(key,value);
                 newnode->next=temp->next;
                 temp->next=newnode;
                 return;
              }
              temp=temp->next;
              
         }
        
    }
    
    int get(int key) {

        if(head==nullptr)
        {
            return -1;
        }
        if(head->key==key)
        {
            return head->value;
        }
        Node*temp=head;
        while(temp!=nullptr)
        {
            if(temp->key==key)
            {
                return temp->value;
            }
            temp=temp->next;
        }
        return -1;
        
    }
    
    void remove(int key) {

        if(head==nullptr)
        {
            return;
        }
        if(head->key==key)
        {
            Node *todelete=head;
            head=head->next;
            delete todelete;
            return;
        }
        Node*prev=head;
        Node*temp=head->next;
        while(temp!=nullptr)
        {
             
             if(temp->key==key)
             {
                prev->next=temp->next;
                delete temp;
                return;
             }
             prev=temp;
             temp=temp->next;
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
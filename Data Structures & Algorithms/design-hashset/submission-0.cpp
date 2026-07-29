struct Node{
    int data;
    Node* next;
};

class MyHashSet {

private:
      Node* head;
      Node* tail;
public:
    MyHashSet() {
       
       int data;
       head=nullptr;
       tail=nullptr;
        
    }
private:
     Node * createnode(int key)
     {
         Node * newnode= new Node();
         newnode->data=key;
         newnode->next=nullptr;
         return newnode;
     }
 public:   
    void add(int key) {
        
        Node*temp=head;
        while(temp!=nullptr)
        {
            if(temp->data==key)
            {
                return ;
            }
            temp=temp->next;
        }
          Node * newnode=createnode(key);
          if(head==nullptr)
          {
             head=newnode;
             tail=newnode;
          }
          else
          {
             tail->next=newnode;
             tail=newnode;
          }
     
        
    }
    void remove(int key) {

    if(head==nullptr) return;   
    if(head->data==key)         
    {
        Node* toDelete = head;
        head = head->next;
        if(head==nullptr) tail=nullptr;  
        delete toDelete;
        return;
    }

    Node* prev = head;
    Node* temp = head->next;

    while(temp != nullptr)
    {
        if(temp->data == key)
        {
            prev->next = temp->next;
            if(temp==tail) tail=prev;   
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    }
}
    bool contains(int key) {

        if(head==nullptr) return false;
        if(head->data==key)
        {
            return true;
        }
        Node*temp=head;
        while(temp!=nullptr)
        {
            if(temp->data==key)
            {
                return true;
            }
            temp=temp->next;
        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
    #include<iostream>   
   using namespace std;
   #define maxsize 5
    
     class queue
  {
      public:
      
      int front = -1, rear = -1;  
    int queue[maxsize];
      
    void insert()  
    {  
        
        int item;  
        cout<<"\nEnter the element\n";  
        cin>>item;      
        if(rear == maxsize-1)  
        {  
            cout<<"\nOVERFLOW\n";  
              
        }  
        if(front == -1 && rear == -1)  
        {  
            front = 0;  
            rear = 0;  
        }  
        else   
        {  
            rear = rear+1;  
        }  
        queue[rear] = item;  
        cout<<"\nValue inserted ";  
          
    }  
    void Delete()  
    {  
        int item;   
        if (front == -1 || front > rear)  
        {  
            cout<<"\nUNDERFLOW\n";  
            return;  
                  
        }  
        else  
        {  
            item = queue[front];  
            if(front == rear)  
            {  
                front = -1;  
                rear = -1 ;  
            }  
            else   
            {  
                front = front + 1;  
            }  
            cout<<"\nvalue deleted ";  
        }  
          
          
    }  
          
    void display()  
    {  
        int i;  
        if(rear == -1)  
        {  
            printf("\nEmpty queue\n");  
        }  
        else  
        {   cout<<"\nprinting values .....\n";  
            for(i=front;i<=rear;i++)  
            {  
                cout<<queue[i];  
            }     
        }  
    }  
  
      
  };
    
    int main ()  
    {  
        queue q1;
        
        int choice;   
        while(choice != 4)   
        {     
            cout<<"\n*************************Main Menu*****************************\n";  
            cout<<"\n=================================================================\n";  
            cout<<"\n1.insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n";  
            cout<<"\nEnter your choice ?";  
            cin>>choice;  
           if (choice==1)
           {
              q1.insert();
           }
           else if(choice==2)
           {
              q1. Delete();
           }
           else if(choice==3)
           {
             q1. display();
           }
           else 
           {
               cout<<"Exiting.....Programe";
           }
           
           
             
        }  
    }  
   
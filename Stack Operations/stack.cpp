    #include <iostream>   
    using namespace std;
    int stack[100],i,j,choice=0,n,top=-1;  
    void push();  
    void pop();  
    void show();  
    int main ()  
    {  
          
        cout<<"Enter the number of elements in the stack \n";   
        cin>>n;  
    cout<<"*********Stack operations using array*********\n";  
      
    cout<<"\n----------------------------------------------\n";  
        while(choice != 4)  
        {  
            cout<<"Chose one from the below options...\n";  
            cout<<"\n1.Push\n2.Pop\n3.Show\n4.Exit\n";  
            cout<<"\n Enter your choice \n";        
            cin>>choice;  
            if(choice==1) 
                {   
                    push();  
                }  
                else if(choice==2)
                {  
                    pop();  
                }  
                else if(choice==3)   
                {  
                    show();  
                }  
                else if(choice==4)    
                {  
                    cout<<"Exiting....\n";  
                }  
                else  
                {  
                    cout<<"Please Enter valid choice \n";  
                }   
            }  
        }  
    void push ()  
    {  
        int val;      
        if (top == n )   
        cout<<"\n Overflow";   
        else   
        {  
            cout<<"Enter the value?";  
            cin>>val;         
            top = top +1;   
            stack[top] = val;   
        }   
    }   
      
    void pop ()   
    {   
        if(top == -1)   
cout<<"Underflow";  
        else  
        top = top -1;   
    }   
    void show()  
    {  
        for (i=top;i>=0;i--)  
        {  
            cout<<stack[i]<<"\n";  
        }  
        if(top == -1)   
        {  
            cout<<"\t Stack is empty";  
        }  
    }  
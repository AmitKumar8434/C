#include<bits/stdc++.h>
#define size 7
#define empty -10
using namespace std;

int table[size];
void initTable(){
    for(int i=0;i<size;i++){
        table[i]=empty;
    }
    return;
}

int hashing(int data){
    return data%size;
}

void insert(int data){
    /*int indx=hashing(data);

    if(table[indx]==empty){
        table[indx]=data;
        return;
    }
*/
    int flag=0;

    for(int i=0;i<size;i++){
        int indx=hashing(data+i);
        if(table[indx]==empty){
            table[indx]=data;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Table is Full !"<<endl;
    return;
}

void del(int data){
    int indx=hashing(data);

    if(table[indx]==data){
        table[indx]=empty;
        return;
    }
    int flag=0;

    for(int i=1;i<size;i++){
        indx=hashing(data+i);
        if(table[indx]==data){
            table[indx]=empty;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Item not found !"<<endl;
    return;
}
void search(int data){
    int indx=hashing(data);

    if(table[indx]==data){
        cout<<"Item Found !"<<endl;
        return;
    }
    int flag=0;

    for(int i=1;i<size;i++){
        indx=hashing(data+i);
        if(table[indx]==data){
            cout<<"Item Found !"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0) cout<<"Item not found !"<<endl;
    return;
}
void display(){
    for(int i=0;i<size;i++){
        if(table[i]!=empty) cout<<table[i]<<endl;
        else cout<<"(empty)"<<endl;
    }
    return;
}

int main(){
    initTable();
    int op;
    while(true){
        cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
        cout<<"[1] Insert\n[2] Delete\n[3] Search\n[4] Display\n[5] Exit\n";
        cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-"<<endl;
        cout<<"Enter Operation :";
        cin>>op;
        int data;
        switch (op){
        case 1: cout<<"Enter data to insert : ";
                cin>>data;
                insert(data);
                break;
        case 2: cout<<"Enter data to delete : "; 
                cin>>data;
                del(data);
                break;
        case 3: cout<<"Enter data to search :";
                cin>>data;
                search(data);
                break;
        case 4: display();
                break;
        case 5: exit(0);

        default: cout<<"Please Choose an Correct Option !";
            break;
        }
        
    }
    return 0;
}
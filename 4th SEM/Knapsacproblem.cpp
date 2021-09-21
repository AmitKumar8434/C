#include<bits/stdc++.h>
using namespace std;
class Item{
    public:
    int value;
    int weight;
    void insert(int v,int w){
        this->value = v;
        this->weight = w;
    }  
};
void print(Item I1[],int n){
    for (int i = 0; i < n;i++){
        cout << I1[i].value<<" ";
        cout << I1[i].weight<<" ";
    }
    cout << endl;
}
bool compare(Item I1,Item I2){
    double a = (double)I1.value / (double)I1.weight;
    double b = (double)I2.value / (double)I2.weight;
    return a > b;
}
double fractionalKnapsac(Item items[],int n,int W){
    sort(items, items + n,compare);
    int currW = 0;
    double finalV = 0.0;
    for (int i = 0; i < n;i++){
        if(currW + items[i].weight<= W){
            currW = currW + items[i].weight;
            finalV = finalV+ items[i].value;
        }
        else{
            int left = W - currW;
            finalV=finalV+(items[i].value * ((double)left / (double)items[i].weight));
            break;
        }
    }
    return finalV;
}
int main(){
    int W;
    cout << "Enter Knapsac Capacity:";
    cin >> W;
    cout << "Enter the number of items:";
    int n;
    cin >> n;
    Item items[n];
    for (int i = 0;i<n;i++){
        cout << "Enter value:";
        int v;
        cin >> v;
        cout << "Enter weight:";
        int w;
        cin >> w;
        items[i].insert(v, w);
    }
    cout<<"Maximum Profit: "<<fractionalKnapsac(items, n, W);
}
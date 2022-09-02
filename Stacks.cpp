#include <bits/stdc++.h>
using namespace std;


//Stacks
/*
//Stacks Using Arrays
#define n 100
class stack{
    int* arr;
    int top;
    public:
    stack()
    {
        arr=new int[n];
        top=-1;
    }
    void push(int x)
    {
        if (top==n-1)
        {
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if (top==-1)
        {
            cout<<"Empty Stack Motherfucker,Go Pop Your Cherry"<<endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"Empty Stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
};
int main()
{
    stack s;
    s.push(1);
    s.push(2);
    cout<<s.Top()<<endl;
    return 0;
}
*/
//Insert Element At the Bottom of the Stack(Very Important)
// void solve(stack<int> &s,int x){
//     if(s.empty()){
//         s.push(x);
//         return;
//     }
//     int num=s.top();
//     s.pop();
//     solve(s,x);
//     s.push(num);
// }
// //Reverse a stack using Recursion
// void reverse(stack<int> &st){
//     if(st.empty()){
//         return;
//     }
//     int num=st.top();
//     st.pop();
//     reverse(st);
//     solve(st,num);
// }
// //Sort a Stack using Recursion(Very Important)
// void sortedInsert(stack<int> &stt,int num){
//     if(stt.empty() || (!s.empty() && s.top()<num)){
//         stt.push(num);
//         return;
//     }

//     int n=stt.top();
//     stt.pop();

//     sortedInsert(stt,num);
//     stt.push(n);
// }
// void sort(stack<int> &stt){
//     if(stt.empty()){
//         return;
//     }
//     int num=stt.top();
//     stt.pop();
//     sort(stt);

//     sortedInsert(stt,num);
// }
//Next Smaller Element
// vector<int> nxtSmaller(vector<int> &arr,int n){
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);
//     for(int i=n-1;i>=0;i--){
//         int curr=arr[i];
//         while(s.top()>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(curr);
//     }
//     return ans;
// }
// //Largest Rectangular Area in Histogram
// vector<int> nxtS(vector<int> &arr,int n){
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);
//     for(int i=n-1;i>=0;i--){
//         int curr=arr[i];
//         while(s.top()!=-1 && arr[s.top()]>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(i);
//     }
//     return ans;
// }
// vector<int> prevS(vector<int> &arr,int n){
//     stack<int> s;
//     s.push(-1);
//     vector<int> ans(n);
//     for(int i=0;i<n;i++){
//         int curr=arr[i];
//         while(s.top()!=-1 && arr[s.top()]>=curr){
//             s.pop();
//         }
//         ans[i]=s.top();
//         s.push(i);
//     }
//     return ans;
// }
// int largestRectangleArea(vector<int> &heights){
//     int n=heights.size();

//     vector<int> next(n);
//     next=nxtS(heights,n);

//     vector<int> prev(n);
//     prev=prevS(heights,n);

//     int area=INT_MIN;

//     for(int i=0;i<n;i++){
//         int l=heights[i];
        
//         if(next[i]==-1){
//             next[i]==n;
//         }

//         int b=next[i]-prev[i]-1;

//         int newArea=l*b;
//         area=max(area,newArea);
//     }
//     return area;
// }
// //Max Rectangle in Binary Matrix with all 1's(Extension of Largest 
//                                             //rectangular area)
// //GFG
// int maxArea(int M[MAX][MAX],int n,int m){
//     int area=largestRectangleArea(M[0],m);

//     for(int i=1;i<n;i++){
//         for(int j=0;j<m;j++){

//             if(M[i][j]!=0){
//                 M[i][j]=M[i][j]+M[i-1][j];
//             }
//             else{
//                 M[i][j]=0;
//             }
//         }
//         area=max(area,largestRectangleArea(M[i],m));
//     }
//     return area;
// }

// class SpecialStack{
//     stack<int> s;
//     int mini;
//     public:
//     void push(int data){
//         if(s.empty()){
//             s.push(data);
//             mini=data;
//         }
//         else{            //For Baki Element
//             if(data<mini){
//                 int val=(2*data-mini)
//                 s.push(val);
//                 mini=data;
//             }
//             else{
//                 s.push(data);
//             }
//         }
//     }
//     int pop(){
//         if(s.empty()){
//             return -1;
//         }
//         int curr=s.top();
//         if(curr>mini){
//             return curr;
//         }
//         else{
//             int prevmin=mini;
//             int val=2*mini-curr;
//             mini=val;
//             return prevmin;
//         }
//     }
//     int top(){
//         if(s.empty()){
//             return -1;
//         }
//         int curr=s.top();
//         if(curr<mini){
//             return mini;
//         }
//         else{
//             return curr;
//         }
//     }
//     int getmin(){
//         if(s.empty()){
//             return -1;
//         }
//         return mini;
//     }
// };
//int main(){
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    //solve(s,0);
    //reverse(s);
    //while(s.size()){
    //    cout<<s.top()<<endl;
    //    s.pop();
    //}
    // vector<int> arr={2,3,1,4};
    // nxtS(arr,4);
//}
//Celebrity Problem
// bool knows(vector<vector<int>> &M,int a,int b){
//     if(M[a][b]==1){
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int celebrity(vector<vector<int>> &M,int n){
//     stack<int> s;
//     for(int i=0;i<n;i++){
//         s.push(i);
//     }

//     while(s.size()!=1){
//         int a=s.top();
//         s.pop();
//         int b=s.top();

//         if(knows(M,a,b)){
//             s.push(b);
//         }
//         else{
//             s.push(a);
//         }
//     }
//     int potentialCandidate=s.top();
//     bool rowCheck=true;
//     for(int i=0;i<n;i++){
//         if(M[potentialCandidate][i]!=0){
//             rowCheck=false;
//         }
//     }
//     bool colCheck=false;
//     int colCount=0;
//     for(int i=0;i<n;i++){
//         if(M[i][potentialCandidate]==1){
//             colCount++;
//         }
//     }
//     if(colCount==n-1){
//         colCheck=true;
//     }
//     if(rowCheck && colCheck){
//         return potentialCandidate;
//     }
//     else return -1;
// }

//Implement Two Stacks In Array
/*
class twostack{
    int *arr;
    int top1;
    int top2;
    int size;
    public:
    twostack(int s){
        this->size=s;//Initializing Size Of The Array
        top1=-1;//For Stack 1
        top2=s;//For Stack 2
        arr=new int[s];//Declaring The Array
    }
    void push1(int num){
        //Atleast an empty space present
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1>0){
            int ans=arr[top1];
            top--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2<size){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};
class NStack{
    int *arr;
    int *top;
    int *next;
    int freespot=0;

    Nstack(int k,int s){
        arr=new int[s];
        next=new int[s];
        top=new int[k];
    

    for(int i=0;i<k;i++){
        top[i]=-1;
    }

    for(int i=0;i<s;i++){
        next[i]=i+1;
    }

    next[s-1]=-1;

    }
    bool push(int x,int m){ //push x into mth stack
        if(freespot==-1){
            return false;
        }

        int index=freespot;

        freespot=next[index];

        arr[index]=x;

        next[index]=top[m-1];

        top[m-1]=index;

        return true;
    }
    int pop(int m){

        if(top[m-1]==-1){
            return -1;
        }

        index=top[m-1];

        top[m-1]=next[index];

        next[index]=freespot;

        freespot=index;

        return arr[index];
    }
};
*/

/*
int prefixEvaluation(string s)
{
    stack<int> st;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]>='0' && s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();

            switch(s[i])
            {
                case '+':
                st.push(op1+op2);
                break;
                case '-':
                st.push(op1-op2);
                break;
                case '*':
                st.push(op1*op2);
                break;
                case '/':
                st.push(op1/op2);
                break;
                case '^':
                st.push(pow(op1,op2));
                break;
            }
        }
    }
    return st.top();
}
int main(){
    cout<<prefixEvaluation("-+7*45+20")<<endl;
    return 0;
}
*/
// Balanced Parenthesis

// bool isValid(string s)
// {
//     int n=s.size();
//     stack<char> st;
//     bool ans=true;
//     for(int i=0;i<n;i++)
//     {
//         if(s[i]=='{' or s[i]=='(' or s[i]=='[')
//         {
//             st.push(s[i]);
//         }
//         else if(s[i]==')'){
//             if(st.top()=='('){
//                 st.pop;
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(s[i]==']'){
//             if(st.top()=='['){
//                 st.pop;
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//         else if(s[i]=='}'){
//             if(st.top()=='{'){
//                 st.pop;
//             }
//             else{
//                 ans=false;
//                 break;
//             }
//         }
//     }
//     if (!st.empty()){
//         return false;
//     }
//     return ans;
// }
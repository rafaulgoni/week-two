#include <bits/stdc++.h> 
using namespace std;

class Note
{
    public: 
        int val;
        Note* next;
    Note(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void appendNode(Note*& head, int val) {
    if (head == NULL) {
        head = new Note(val);
    } else {
        Note* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new Note(val);
    }
}

int getSize(Note* head) {
    int size = 0;
    Note* temp = head;
    while (temp != NULL) {
        size++;
        temp = temp->next;
    }
    return size;
}

int main() {
    Note* head = NULL;
    int value;
    while (cin >> value && value != -1) {
        appendNode(head, value);
    }
    cout << getSize(head) << endl;
    return 0;
}



// #include <bits/stdc++.h> 
// using namespace std;

// struct Node {
//     int data;
//     Node* next;
// };

// Node* createNode(int data) {
//     Node* newNode = new Node();
//     newNode->data = data;
//     newNode->next = nullptr;
//     return newNode;
// }
// class Note
// {
//     public: 
//         int val;
//         Note* next;
//     Note(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };


// void appendNode(Node*& head, int data) {
//     if (head == nullptr) {
//         head = createNode(data);
//     } else {
//         Node* temp = head;
//         while (temp->next != nullptr) {
//             temp = temp->next;
//         }
//         temp->next = createNode(data);
//     }
// }

// int getSize(Node* head) {
//     int size = 0;
//     Node* temp = head;
//     while (temp != nullptr) {
//         size++;
//         temp = temp->next;
//     }
//     return size;
// }

// int main() {
//     Node* head = nullptr;
//     int value;
//     while (cin >> value && value != -1) {
//         appendNode(head, value);
//     }
//     cout << getSize(head) << endl;
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// void fun(int *&p){
// p = NULL;
// }
// int main() {
// int val = 10;
// int *ptr = &val;
// fun(ptr);
// cout << ptr << endl;
// return 0;
// }
// void fun(int * p){
// p = NULL;
// }
// int main(){
// int val = 10;
// int *ptr = &val;
// fun(ptr);
// cout << *ptr << endl;
// return 0;
// }
// void fun(int *p){
// *p = 20;
// }
// int main(){
// int val = 10;
// int *ptr = &val;
// fun(ptr);
// cout << *ptr << endl;
// return 0;
// }

// this C++ code...
// int main() {

//     float s, a, k;
//     cin >> s >> a >> k;
//     float ans = (s / a) * k;
//     cout << ans << " Kg" << endl;

//     float ansOne = (k / s);
//     cout << ansOne << " Kg" << endl;

//     int g = 1000;
//     int ansTwo = (g * ans);
//     cout << ansTwo << " Gram" << endl;

//     return 0;
// }


// This C code...
// #include <stdio.h>

// int main() {
//     float s, a, k;
//     scanf("%f %f %f", &s, &a, &k);
    
//     float ans = (s / a) * k;
//     printf("%.2f Kg\n", ans);
    
//     float ansOne = (k / s);
//     printf("%.2f Kg\n", ansOne);
    
//     int g = 1000;
//     int ansTwo = (int)(g * ans);
//     printf("%d Gram\n", ansTwo);

//     return 0;
// }


// This JavaScript code...
// function calculate(s, a, k) {
//     let ans = (s / a) * k;
//     console.log(ans.toFixed(2) + " Kg");

//     let ansOne = (k / s);
//     console.log(ansOne.toFixed(2) + " Kg");

//     let g = 1000;
//     let ansTwo = Math.round(g * ans);
//     console.log(ansTwo + " Gram");
// }

// let s = 16;
// let a = 100;
// let k = 8;
// calculate(s, a, k);

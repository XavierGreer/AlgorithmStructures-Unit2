//
//  main.cpp
//  Unit 2 Linked Lists
//
//  Created by Xavier Greer on 8/3/20.
//  Copyright © 2020 Xavier Greer. All rights reserved.
//

//#include <string>
//#include <iostream>
//
//using namespace std;
////
//struct studentnode{
//    string data;
//    studentnode *next;
//
//};
//
//void append(studentnode** head_ref, string new_data){
//    studentnode* new_node = new studentnode();
//
//    studentnode *last = *head_ref;
//
//    new_node->data = new_data;
//    new_node->next = NULL;
//
//    if(*head_ref == NULL){
//        *head_ref = new_node;
//        return;
//    }
//
//    while(last->next != NULL){
//        last = last->next;
//    }
//
//    last->next = new_node;
//    return;
//
//}
//
//void displayStudents(studentnode *node){
//    while(node != NULL){
//        cout<<" "<<node->data;
//        node = node->next;
//
//    }
//    cout <<"\n";
//}
//
////Main function
//int main(){
//    studentnode* head = NULL;
//
//    append(&head, "Peggy");
//    append(&head, "Paul");
//    append(&head, "Tammy");
//    append(&head, "Jeff");
//
//    cout<<"Linked List stuff: ";
//    displayStudents(head);
//
//    return 0;
//}
//
//


#include <iostream>

using namespace std;

struct student
{
    string data;
    student *next;
};

class linked_list
{
private:
    student *head,*tail;
public:
    
    linked_list(){
        head = NULL;
        tail = NULL;
    }

    void add_node(string n){
        student *tmp = new student;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL){
            head = tmp;
            tail = tmp;
        }
        else{
            tail->next = tmp;
            tail = tail->next;
        }
    }
    
    //displayStudents() is a method used to print the students names in the class in the terminal
    void displayStudents(){
        cout<<"List of Students:";
        
        while(head != NULL){
            cout<<" "<<head->data;
            head = head->next;
        }
    }
    
//    ~linked_list(){
//        linked_list* current = ;
//        linked_list* next;
//    }
//
};





int main()
{
    linked_list studentList;
    studentList.add_node("Tommy");
    studentList.add_node("Christy");
    studentList.add_node("Javi");
    studentList.add_node("Jessica");
    
    studentList.displayStudents();
    
    cout<<"\n";
    
    return 0;
}

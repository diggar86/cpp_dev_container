#include <iostream>
#include "header/test_header.h"
#include "sources/test_source.h"
#include "sources/test_class.h"

using namespace std;

struct my_struct
{
    /* data */
    int id;
    char* name;
};


void awesome_function(){
    // printf("You have called an awesome function\n");
    cout << "You have called an awesome function" << endl;
}

void function_with_param(char* p_text){
    // printf("Dein Text: %s\n", p_text);
    cout << "Your Text: " << p_text << endl;
}

int add(int n1, int n2){
    return n1 + n2;
}

int main(){
    // printf("Hallo Welt\n");
    cout << "Hallo Welt" << endl;

    for(int i = 1; i <= 10; i++){
        if(i < 10)
            cout << i << "...";
        else
            cout << i << endl;
    }
    
    awesome_function();

    char str1[20] = "I am the greatest!";
    function_with_param(str1);

    int n1 = 3, n2 = 4;
    // printf("%d + %d = %d\n", n1, n2, add(n1, n2));
    cout << n1 << " + " << n2 << " = " << add(n1, n2) << endl;

    char name1[4] = "Jan";
    struct my_struct my_obj;
    my_obj.id = 1;
    my_obj.name = name1;

    // printf("id: %d - name: %s\n", my_obj.id, my_obj.name);
    cout << "id: " << my_obj.id << " - name: " << my_obj.name << endl;

    test_header_func();
    test_source_func();

    cl_test_class tcl(1, 2, 3);
    tcl.print();

    return 0;
}
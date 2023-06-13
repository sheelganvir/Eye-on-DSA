// WILD POINTERS : A wild pointer is a type of pointer where, the user declare the pointer but not initialize it. Due to this it ends up pointing to some random memory location. Due to this we might get some undefined behaviour & crashes. In some cases we might get segmentation fault.
//EX:
    #include <iostream>
    using namespace std;

    int main(){
        int *pntr;           //only declare
        cout<<pntr<<" "<<*pntr<<endl;
       

//NULL POINTERS: If we want to have a pointer variable which is just declared but will get address later to store. We can use null pointer.
//EX: 

        int *ptr = NULL;
        int *p1 = 0;
        int *p2 = '\0';
        cout<<ptr<<" "<<p1<<" "<<p2<<endl;


//DANGLING POINTER: It is a type of pointer that points to a memory location that is not valid
//EX:
    int *pntr1 = NULL;
    {
        int x = 10;
        ptr = &x;
    }
    cout<<ptr<<endl;


//VOID POINTER: These are special pointers that can point to any datatype value. Void pointers cannot be dereferenced.
//EX:
    float f = 10.2;
    int x = 10;
    void *pointer = &f;
    pointer = &x;
    int *integerPointer = (int *)pointer;
    cout<<integerPointer<<endl;
        return 0;
    }
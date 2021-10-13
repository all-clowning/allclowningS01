#include "FinalCType/String.h"

#include <stdio.h>

void testString() {
    // String *s = createString(); destroyString(s);
    // String *s = createStringWith_cstr("fuck"); destroyString(s);
    // String *s = createStringWith_copy_cstr("copy fuck"); deleteString(s);


    String *s = createString();
    stringAppend_cstr(s, "fuck");
    stringAppend_cstr(s, " ");
    stringAppend_cstr(s, "you");

    printf("%s(%d)\n", s->value, s->len);
    // fuck you(8)
}

////////////////////////////////////////////////////////////////////////////////////

FinalC_Object_Define(Person) {
    char name[100];
    int age;
};
FinalC_Object_Size(Person);
FinalC_Object_Create(Person);

// Person 变种规则
// createPersion With Initialize
Person *createPersonWithInitialize(char *name, int age) {
    Person *p = createPerson();
    strcpy(p->name, "ffashion");
    p->age = 35;
    return p;;
}


void testPersion() {
    // Person *p = createPerson();
    // strcpy(p->name, "ffashion");
    // p->age = 35;

    // Person 变种规则 With Suffix -> 
    Person *p = createPersonWithInitialize("ffashion", 35);

    printf("%s 已经 %d 了\n", p->name, p->age);
    // ffashion 已经 35 了
}

////////////////////////////////////////////////////////////////////////////////////


int	main(int argc, char **argv)
{
    // testString();
    testPersion();
    
    return 0;
}

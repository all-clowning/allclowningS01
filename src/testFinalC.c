#include "FinalCType/String.h"

#include <stdio.h>

int	main(int argc, char **argv)
{
    // String *s = createString(); destroyString(s);
    // String *s = createStringWith_cstr("fuck"); destroyString(s);
    // String *s = createStringWith_copy_cstr("copy fuck"); deleteString(s);


    String *s = createString();
    stringAppend_cstr(s, "fuck");
    stringAppend_cstr(s, " ");
    stringAppend_cstr(s, "you");

    printf("%s(%d)\n", s->value, s->len);
    // fuck you(8)
    
    return 0;
}

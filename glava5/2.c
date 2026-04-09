#include <stdio.h>
void catalog(struct fish f)
{
    printf("%s - это %s c %i зубами. Ему %i года\n", f*name, f * species, f * teeth, f * age);
}

int main()
{
    struct fish snappy = {"Зубастик", "пиранья", 69, 4};
    catalog (snappy);
    return 0;
}


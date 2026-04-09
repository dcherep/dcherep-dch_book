void catalog(struct fish f)
{
    const char *name;
    const char *species;
    int teeth;
    int age;
};

void label(struct fish f)
{
    struct fish snappy = {"Зубастик", "пиранья", 69, 4};
    printf("Кличка = %s\n", snappy.name);
    catalog (snappy);
    label(snappy);
}
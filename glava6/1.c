void display(island *start)
{
    island *i = start;
    for (; і != NULL; i = i->next ){
        printf("Name: %s open: %s-%s\n", i->name, i->opens, i->closes)
    }
    island amity = {"остров Дружбы", "09:00", "17:00", NULL};
    island craggy = {"Скалистый", "09:00", "17:00", NULL};
    island isla_nublar = {"Туманный", "09:00", "17:00", NULL};
    island shutter = {"остров Проклятых", "09:00", "17:00", NULL};
    amity.next = &craggy;
    craggy.next = &isla_nublar;
    isla_nublar.next = &shutter;
    island skull = {"остров Черепа", "09:00", "17:00", NULL};
    isla_nublar.next = &skull;
    skull.next = &shutter;
    display(&amity);
}

#include <stdio.h>

struct product {
    int id;
    char name[30];
    double price;
    int quantity;
};

int main() {
    FILE *fp;
    struct product p;
    int choice, target_id;

    fp = fopen("products.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("products.dat", "wb+");
        if (fp == NULL) {
            printf("fatal error: could not create file. exiting.\n");
            return 1;
        }
    }

    while(1) {
        printf("\n1. insert/update product\n2. display product\n3. exit\nchoice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("enter product id (acts as memory slot): ");
            scanf("%d", &p.id);
            printf("enter name, price, quantity: ");
            scanf("%s %lf %d", p.name, &p.price, &p.quantity);
            
            fseek(fp, (p.id - 1) * sizeof(struct product), SEEK_SET);
            fwrite(&p, sizeof(struct product), 1, fp);
            printf("product saved.\n");
            
        } else if(choice == 2) {
            printf("enter product id to find: ");
            scanf("%d", &target_id);
            
            fseek(fp, (target_id - 1) * sizeof(struct product), SEEK_SET);
            fread(&p, sizeof(struct product), 1, fp);
            
            if(p.id == target_id) {
                printf("id: %d, name: %s, price: %.2f, qty: %d\n", p.id, p.name, p.price, p.quantity);
            } else {
                printf("no product exists at that id.\n");
            }
            
        } else {
            break;
        }
    }
    fclose(fp);
    return 0;
}

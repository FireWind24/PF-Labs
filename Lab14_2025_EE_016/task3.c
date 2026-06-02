#include <stdio.h>
#include <string.h>

struct book {
    int id;
    char title[50];
    int available; 
    char borrower[30]; 
};

int main() {
    FILE *fp;
    struct book b;
    int choice, book_id;

    fp = fopen("library.dat", "rb+");
    if (fp == NULL) {
        fp = fopen("library.dat", "wb+");
        if (fp == NULL) {
            printf("fatal error: could not create file. exiting.\n");
            return 1;
        }
    }

    while(1) {
        printf("\n1. add book\n2. issue book\n3. return book\n4. display info\n5. exit\nchoice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("enter book id: ");
            scanf("%d", &b.id);
            printf("enter title: ");
            scanf("%s", b.title);
            
            b.available = 1;
            strcpy(b.borrower, "none");
            
            fseek(fp, (b.id - 1) * sizeof(struct book), SEEK_SET);
            fwrite(&b, sizeof(struct book), 1, fp);
            printf("book added to library.\n");
            
        } else if(choice == 2 || choice == 3) {
            printf("enter book id: ");
            scanf("%d", &book_id);
            
            fseek(fp, (book_id - 1) * sizeof(struct book), SEEK_SET);
            fread(&b, sizeof(struct book), 1, fp);
            
            if(b.id == book_id) {
                if(choice == 2 && b.available == 1) {
                    printf("enter borrower name: ");
                    scanf("%s", b.borrower);
                    b.available = 0;
                    printf("book issued to %s.\n", b.borrower);
                } else if (choice == 3 && b.available == 0) {
                    b.available = 1;
                    strcpy(b.borrower, "none");
                    printf("book returned successfully.\n");
                } else {
                    printf("action failed. check if already issued/returned.\n");
                }
                
                fseek(fp, (book_id - 1) * sizeof(struct book), SEEK_SET);
                fwrite(&b, sizeof(struct book), 1, fp);
            } else {
                printf("book not found.\n");
            }
            
        } else if(choice == 4) {
            printf("enter book id: ");
            scanf("%d", &book_id);
            
            fseek(fp, (book_id - 1) * sizeof(struct book), SEEK_SET);
            fread(&b, sizeof(struct book), 1, fp);
            
            if(b.id == book_id) {
                printf("title: %s, available: %s, borrower: %s\n", 
                       b.title, b.available ? "yes" : "no", b.borrower);
            } else {
                printf("book not found.\n");
            }
        } else {
            break;
        }
    }
    fclose(fp);
    return 0;
}

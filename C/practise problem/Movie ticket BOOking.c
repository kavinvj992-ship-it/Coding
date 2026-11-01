#include <stdio.h>
int arr[3][3];
int isticketbooked(int sr, int sc);
int ticketbook(int n) {
    int sr=0,sc=0;
    printf("\nEnter row and column to book seat: ");
    scanf("%d %d", &sr, &sc);
    if (arr[sr-1][sc-1] == 1) {
        printf("This seat is already booked, try other seats\n");
        ticketbook(n);
    }
    else if(sr-1>3 && sc-1>3){
        printf(" your enter seat is out of range,try other seats\n");
        ticketbook(n);
    }
    else {
        arr[sr-1][sc-1] = 1;
        printf("Seat booked successfully!\n");
    }
    return 0;    
}
int isticketbooked(int sr, int sc) {
    if (arr[sr-1][sc-1] == 1) {
        printf("This seat is already booked, try other seats\n");
        return 0;
    }
    else {
        arr[sr-1][sc-1] = 1;
        printf("Seat booked successfully!\n");
    }
}
int main(){
    int ticket;
    printf("Movie list:\n\t1.Meesaya murukku2\n\t2.Dorothy\n\t3.Mandaddi\n");
    int movie,n;
    printf("Enter a number to select a movie: ");
    scanf("%d",&movie);
    switch(movie){
        case 1:
            printf("You have selected Meesaya murukku2");
            break;
        case 2:
            printf("You have selected Dorothy");
            break;
        case 3:
            printf("You have selected Mandaddi");
            break;
    }
    printf("\nHow many seats you want to book:");
    scanf("%d",&n);
    printf("Available seats are:\n");
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            printf("🪑");
        }
        printf("\n");
    }
    for(int l=0;l<n;l++){
        ticketbook(n);
    }
    printf("updated seats:\n");

    //display and count remaining seats
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                printf("🔖 ");
            }
            else{
                printf("🪑 ");
                count++;
            }
        }
        printf("\n");
    }
    printf("Thanks for coming, enjoy movie experience");
    return 0;
}
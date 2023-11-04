#include <stdio.h>
#include <stdlib.h>

unsigned long int collatz(long long n) {
    int count=0;
    //η ακέραια μεταβλητή count δείχνει το μήκος της ακολουθίας Collatz για κάθε ακέραιο αριθμό που εισάγεται στην συνάρτηση collatz
    while (n!=1) {
        if (n%2==1)
            n=3*n+1;
           
        else
            n=n/2;
        count++;

    }
    return count+1; //στο άθροισμα της ακολουθίας συμπεριλαμβάνουμε και το 1 
    }
    





int main(int argc,char**argv) {
    if (argc!=3) {
        printf("sorry but you have to check it again\n");//σε περίπτωση λάθος εισαγωγής τιμών απο τον χρήστη
        return 1;
    }
    long long int a=atoi(argv[1]);
    long long int b=atoi(argv[2]);
    if ((a<-100000000)||(b>100000000)) {
        printf("sorry but you have passed the limits\n");
        return 1;
    }
    else if(a<1) {
        //εισαγωγή αριθμού-ορίου απο τον χρήστη που δεν είναι θετικός 
        printf("0\n");
        return 0;
    }
    else {
        unsigned long int max=0;
        //με την χρήση της ακέραιας  θετικής μεταβλητής max δείχνουμε το μέγιστο μήκος ακολουθίας μεταξύ του εύρους τιμών που επιλέγει ο χρήστης
        long long int i;
        unsigned long int k;
        //χρησιμοποιούμε την ακέραια μεταβλητή k για να συγκρινουμε το μήκος ακολουθίας των αριθμών μεταξύ τους
        
        for (i=a;i<=b;i++) {
            k=collatz(i);
            if (k>max)
              max=k;
              


        }
        printf("%lu\n",max);
        return 0;
    }
}

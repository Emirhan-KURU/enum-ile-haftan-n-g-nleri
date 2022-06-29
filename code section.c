#include <stdio.h>

main() {

   enum gunler {Pazartesi=1, Sali, Carsamba, Persembe, Cuma, Cumartesi, Pazar};
   enum gunler gun;
   
   printf("Bir sayi giriniz[1-7]: ");
   scanf("%d", &gun);

   switch (gun) {
      case Pazartesi: printf("Pazartesi "); break;
      case Sali: printf("Sali "); break;
      case Carsamba: printf("Carsamba "); break;
      case Persembe: printf("Persembe "); break;
      case Cuma: printf("Cuma "); break;
      case Cumartesi: printf("Cumartesi "); break;
      case Pazar: printf("Pazar"); break;
   }
}


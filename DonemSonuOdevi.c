#include <string.h>
#include <stdlib.h>
#include <stdio.h>

//STRUCT YAPILARI

struct Telefon
{
    int urunKodu;
    char marka[20];
    char isim[50];
    int fiyat;
    char ozellik[500];
}telefonlar[14];

struct Bilgisayar
{
    int urunKodu;
    char marka[20];
    char isim[50];
    int fiyat;
    char ozellik[500];
}bilgisayarlar[15];

struct Tablet
{
    int urunKodu;
    char marka[20];
    char isim[50];
    int fiyat;
    char ozellik[500];
    
}tabletler[10];

//FONKSİYON İMZALARI
void fiyataGoreGetir();
void tumunusirala();

int main()
{

    //STRUCT İÇİNDEKİ ALANLARA DOSYA OKUMA YOLUYLA DEĞER ATAMASI

    //Telefonların değer ataması
    FILE *dosya1;

    if((dosya1=fopen("TELEFONLAR.txt","r"))!=NULL)
    {
        for(int i=0;i<14;i++)
        {
            fscanf(dosya1,"%d",&telefonlar[i].urunKodu);
            fscanf(dosya1,"%s",&telefonlar[i].marka);
            fscanf(dosya1,"%s",&telefonlar[i].isim);
            fscanf(dosya1,"%d",&telefonlar[i].fiyat);
        }

    }
    else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya1);

    //Bilgisayarların değer ataması
        FILE *dosya3;
        if((dosya3=fopen("bilgisayarlar.txt","r"))!=NULL)
        {
            for (int  i =0; i < 15; i++)
            {
             fscanf(dosya3,"%d",&bilgisayarlar[i].urunKodu);
             fscanf(dosya3,"%s",&bilgisayarlar[i].marka);
             fscanf(dosya3,"%s",&bilgisayarlar[i].isim);
             fscanf(dosya3,"%d",&bilgisayarlar[i].fiyat);
             printf("%d %s %s %d\n",bilgisayarlar[i].urunKodu,bilgisayarlar[i].marka,bilgisayarlar[i].isim,bilgisayarlar[i].fiyat);
            }
            
        }
        else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya3);

    //Tabletlere değer ataması
        FILE *dosya2;
        if((dosya2=fopen("tabletler.txt","r"))!=NULL)
        {
            for (int  i =0; i < 10; i++)
            {
             fscanf(dosya2,"%d",&tabletler[i].urunKodu);
             fscanf(dosya2,"%s",&tabletler[i].marka);
             fscanf(dosya2,"%s",&tabletler[i].isim);
             fscanf(dosya2,"%d",&tabletler[i].fiyat);
             printf("%d %s %s %d\n",tabletler[i].urunKodu,tabletler[i].marka,tabletler[i].isim,tabletler[i].fiyat);
            }
            
        }
        else
    {
        printf("Dosya bulunamadi");
    }
    fclose(dosya2);

    //fiyataGoreGetir();
    tumunusirala();


    return 0;
}


//FONKSİYONLAR

void fiyataGoreGetir()
{

    {   
        printf("Fiyat arastirmasi yapmak istediginiz araligi giriniz (baslangic-bitis):");
        int baslangic,bitis;
        scanf("%d%d",&baslangic,&bitis);
        if(baslangic>bitis)
        {
            printf("Baslangic degeri bitis degerinden buyuk olamaz.");
            
        }
        else
        {
            
            printf("Hangi kategoride fiyat arastirmasi yapmak istediginizi secin:\n1-Telefon 2-Bilgisayar 3-Tablet:");
            int secim;
            scanf("%d",&secim);

            switch(secim)
            {
                case 1:
                for(int i=0;i<14;i++)
                {
                    if(baslangic<telefonlar[i].fiyat && telefonlar[i].fiyat<bitis)
                    {
                        printf("%d %s %s %d\n",telefonlar[i].urunKodu,telefonlar[i].marka,telefonlar[i].isim,telefonlar[i].fiyat);
                    }
                }
               
            }
            

        }
    }
} 

//Ada göre tüm ürünleri sıralayan fonksiyon 
    void tumunusirala(){
        printf("\n\n------------------------------------------------------------\n\n");
        printf("Bütün Ürünler : \n\n");
        printf("------------------------------------------------------------\n\n");
        for (int a = 0; a < 15; a++)
        {
            printf("%d %s %s %d\n",bilgisayarlar[a].urunKodu,bilgisayarlar[a].marka,bilgisayarlar[a].isim,bilgisayarlar[a].fiyat);
        }
        printf("\n\n------------------------------------------------------------\n\n");
        for (int b = 0; b < 10; b++)
        {
            printf("%d %s %s %d\n",tabletler[b].urunKodu,tabletler[b].marka,tabletler[b].isim,tabletler[b].fiyat); 
               
        }
        printf("\n\n------------------------------------------------------------\n\n\n\n");
        for (int i = 0; i < 14; i++)
        {
            printf("%d %s %s %d\n",telefonlar[i].urunKodu,telefonlar[i].marka,telefonlar[i].isim,telefonlar[i].fiyat);
        }
        

    }

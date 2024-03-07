// random ile 1-20 arasında bir sayi üreticez kullanıcı tahmin etmeye çalışacak
// kullanıcının 5 hakkı var.
#include <iostream>
#include <random> 
using namespace std;

int main(){
    cout << "Enter'a bastiginizda program 1-20 arasi rastgele bir sayi olusturacak\n";
    cout << "Tahmin etmek icin 5 hakkiniz olacak\n";
    cout << "Devam etmek icin ENTER'a basin";
    cin.ignore();



    random_device rd; // 
    mt19937 gen(rd()); 
    uniform_int_distribution<> dis(1,20); 

    int kalan_sans = 5;
    int kullanici_tahmini;

    int random_number = dis(gen);

    // kullanıcıya soruyoruz
    do {
    cout << "Tahmininizi giriniz: ";
    cin >> kullanici_tahmini;
    if (kullanici_tahmini == random_number){
        cout << "Tebrikler tahmininiz dogru .";
        break ; // doğru tahminde döngüden çıkıyoruz
    }
    else {
    kalan_sans -= 1;
    cout << "Tahmininiz yanlis. Kalan tahmin hakki " << kalan_sans << endl;
    }
    
    }while (kalan_sans > 0 );

    if (kalan_sans == 0) {
        cout << "Tahmin hakkiniz bitmistir." << ' ' << "Dogru cevap : " << random_number << endl;
        cout << "Oynadiginiz icin tesekkurler.";
        
    
    }

    return 0;


}
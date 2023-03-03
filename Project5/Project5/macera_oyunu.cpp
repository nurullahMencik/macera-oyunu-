#include<iostream>
#include<windows.h>

using namespace std;



void yukleniyor() {

	system("CLS");
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "";
		Sleep(100);
		system("CLS");

	}
	cout << endl;
}

struct node
{
	int data;
	node* next;
};

class linked_list
{
private:
	node* head, * tail;
public:

	int toplam() {
		int sonuc = 0;
		for (node* i = head; i != NULL; i = i->next) {
			sonuc += (i->data);

		}
		return sonuc;


	}


	linked_list()
	{
		head = NULL;
		tail = NULL;
	}

	void add_node(int n)
	{
		node* tmp = new node;
		tmp->data = n;
		tmp->next = NULL;

		if (head == NULL)
		{
			head = tmp;
			tail = tmp;
		}
		else
		{
			tail->next = tmp;
			tail = tail->next;
		}
	}
};





class giris_mekan {
private:
	int magara_min_giris = 50;
	int nehir_min_giris = 100;

public:
	linked_list l;

	virtual bool magaraya_girebilir_mi() = 0;
	virtual bool nehire_girebilir_mi() = 0;

	int get_magara_min_giris() {
		return magara_min_giris;
	}
	int get_nehir_min_giris() {
		return nehir_min_giris;
	}


};



class kilavuz {

public:

	void savasma_mekanları() {
		cout << "This is a war zone. Here you will encounter 0-5 enemies. If you kill these enemies, you will win the skins of the enemies and some rewards. --- Do not forget to examine the combat mechanics"
			<< endl;
	}
	void kontrol() {
		cout << endl << endl;
		cout << "Enter any number to return to the previous page : ";
		int a;
		cin >> a;
		oku();
	}
	void oku() {
		yukleniyor();
		cout << "-----------------------------------------------------USER GUIDE------------------------------------------------------" << endl << endl;
		cout << "1->ABOUT CHARACTER FEATURES" << endl;
		cout << "2->ABOUT HOME" << endl;
		cout << "3->ABOUT FOREST" << endl;
		cout << "4->ABOUT CAVE" << endl;
		cout << "5->ABOUT RİVER" << endl;
		cout << "6->ABOUT WEAPON SHOP" << endl;
		cout << "7->ABOUT ARMOR SHOP" << endl;
		cout << "8->ABOUT SALES OF ANİMAL SKIN " << endl;
		cout << "9->ABOUT WAR MECHANICS" << endl;
		cout << "10->RETURN TO MAIN MENU " << endl << endl;
		cout << "YOUR CHOICE : ";
		int secim;
		cin >> secim;

		yukleniyor();
		switch (secim)
		{
		case 1:
			cout << "1->ABOUT CHARACTER FEATURES" << endl << endl;
			cout << "It is a screen that shows the characteristics of your character and the amount of money you have." << endl;
			kontrol();
			break;
		case 2:
			cout << "2->ABOUT HOME" << endl << endl;
			cout << "It is a place that allows you to increase your life for a certain fee" << endl;
			kontrol();
			break;
		case 3:
			cout << "3->ABOUT FOREST" << endl << endl;
			savasma_mekanları();
			kontrol();
			break;
		case 4:
			cout << "4->ABOUT CAVE" << endl << endl;
			savasma_mekanları();
			kontrol();
			break;
		case 5:
			cout << "5->ABOUT RİVER" << endl << endl;
			savasma_mekanları();
			kontrol();
			break;
		case 6:
			cout << "6->ABOUT WEAPON SHOP" << endl << endl;
			cout << "Here are upgrades that increase your character's damage." << endl;
			cout << "You can purchase the same upgrade multiple times." << endl;
			cout << "You cannot purchase upgrades after your character has reached maximum damage." << endl;
			kontrol();
			break;
		case 7:
			cout << "7->ABOUT ARMOR SHOP" << endl << endl;
			cout << "Here you can upgrade your character's leg armor and body armor." << endl;
			cout << "You can purchase the same upgrade multiple times." << endl;
			cout << "Each leg and body armor blocks one damage." << endl;
			cout << "You cannot purchase leg upgrades when you reach maximum leg armor." << endl;
			kontrol();
			break;
		case 8:
			cout << "8->ABOUT SALES OF ANİMAL SKIN " << endl << endl;
			cout << "Here you can sell the animal skins you collect in the forest, cave and river." << endl;
			kontrol();
			break;
		case 9:
			cout << "9->ABOUT WAR MECHANICS" << endl << endl;
			cout << "The combat mechanics in the game work like this.." << endl;
			cout << "1.Killing enemies -> In order to kill the enemies, your damage must be more than the total health of the enemies and your current life points must be more than the damage of the enemies." << endl;
			cout << "2.Enemies Evade -> For enemies to flee, your current HP must be greater than the enemy's damage and your damage must be less than the total enemy health" << endl;
			cout << "3.Killed by Enemies -> Occurs when the enemies' summoning damage is more than your current HP and your damage is less than the enemies' total health" << endl;
			cout << "CURRENT LIFE POINTS = HEALTH + BODY ARMOR + LEG ARMOR " << endl;
			kontrol();
			break;
		case 10:
			cout << "GOING BACK TO THE MAIN MENU...";
			Sleep(2000);
			break;
		default:
			cout << "HATALI BİR SEÇİM YAPTINIZ!!!" << endl;
			cout << "ANA MENÜYE YÖNLENDİRİLİYORSUNUZ...";
			Sleep(2000);
			break;
		}

	}


};


class mekanlar {
private:
	string isim;
public:
	string get_isim() {
		return isim;
	}
	void set_isim(string isim) {
		this->isim = isim;
	}

};
class dusmanlar {
private:
	string canavar_isim;
	int hasar;
	int can;

	int odul;
public:
	dusmanlar(string isim = "", int hasar = 0, int can = 0, int odul = 0) {
		this->canavar_isim = isim;
		this->hasar = hasar;
		this->can = can;
		this->odul = odul;

	}
	int get_odul() {
		return odul;
	}
	string get_canavar_isim() {
		return canavar_isim;
	}
	void set_canavar_isim(string isim) {
		this->canavar_isim = isim;
	}

	int get_canavar_can() {
		return can;
	}
	int get_canavar_hasar() {
		return hasar;
	}
	void set_canavar_can(int can) {
		this->can = can;
	}
	void set_canavar_hasar(int hasar) {
		this->hasar = hasar;
	}
	void set_get_odul(int odul) {
		this->odul = odul;
	}
};
class karakter_secimi {
protected:
	string isim;
	int secim = 0;
	int govde_zirhi;
	int bacak_zirhi;
	int hasar;
	int can;
	int para;
	string karakter_ismi;
	int kurt_postu_sayisi = 0;
	int ayi_postu_sayisi = 0;
	int timsah_derisi_sayisi = 0;

public:
	string get_isim() {
		return isim;
	}
	string get_karakter_ismi() {
		return karakter_ismi;
	}

	int get_govde_zirhi() {
		return govde_zirhi;
	}
	int get_bacak_zirhi() {
		return bacak_zirhi;
	}
	int get_hasar() {
		return hasar;
	}
	int get_can() {
		return can;
	}
	int get_para() {
		return para;
	}
	void set_govde_zirhi(int zirh) {
		govde_zirhi = zirh;
	}
	void set_bacak_zirhi(int b_zirh) {
		bacak_zirhi = b_zirh;
	}
	void set_hasar(int hasar) {
		this->hasar = hasar;
	}
	void set_can(int healt) {
		can = healt;
	}
	void set_para(int money) {
		para = money;
	}
	void set_kurt_postu_sayisi(int kurt_postu_sayisi) {
		this->kurt_postu_sayisi = kurt_postu_sayisi;
	}
	void set_ayi_postu_sayisi(int ayi_postu_sayisi) {
		this->ayi_postu_sayisi = ayi_postu_sayisi;
	}
	void set_timsah_derisi_sayisi(int timsah_derisi_sayisi) {
		this->timsah_derisi_sayisi = timsah_derisi_sayisi;
	}
	int get_kurt_postu_sayisi() {
		return kurt_postu_sayisi;
	}
	int get_ayi_postu_sayisi() {
		return ayi_postu_sayisi;
	}
	int get_timsah_derisi_sayisi() {
		return timsah_derisi_sayisi;
	}


	void karakterler_menu() {
		switch (karakter_tanıt()) {
		case 1:
			karakter_özellik_atama("GAREN", 80, 100, 1000, 40, 30);
			break;
		case 2:
			karakter_özellik_atama("ASHE", 110, 100, 1000, 25, 15);
			break;
		case 3:
			karakter_özellik_atama("ZED", 100, 100, 1000, 30, 20);
			break;
		case 4:
			karakter_özellik_atama("LEOANA", 60, 100, 1000, 45, 45);
			break;
		default:
			karakter_özellik_atama("GAREN", 80, 100, 1000, 40, 30);
			break;

		}

		cout << isim << " KARAKTERİN OLUŞTURULUYOR..." << endl;
		Sleep(2500);
		yukleniyor();
		cout << "-------------------------------------------------------" << karakter_ismi << "--------------------------------------------------------------" << endl << endl;
		cout << "OYUNA BAŞLAMAK İÇİN HERHANGİ BİR SAYI GİRİN : ";
		int basla;
		cin >> basla;

	}
	int karakter_tanıt() {
		cout << "OYUNA BAŞLAMAK İÇİN ÖNCE İSMİNİZİ GİRİN : ";
		cin >> isim;
		yukleniyor();
		cout << isim << " Bir karakter seç..." << endl << endl;
		cout << "1.Garen  -> Garen is a warrior.THe sword uses shield and armor." << endl;
		cout << "2.Ashe   -> Ashe is a rrow.Uses a bow and light armor. " << endl;
		cout << "3.Zed    -> Zed is an assasin.uses a blade and light armor " << endl;
		cout << "4.Leona  -> Leona is a support.Wields a week sword nad very heavy armor" << endl << endl;
		cout << "SEÇİMİN : ";

		cin >> secim;
		cout << endl << endl;

		while (secim > 4 || secim < 1) {
			cout << isim << " LÜTFEN GEÇERLİ BİR KARAKTER SEÇİN" << endl;
			cout << "SEÇİMİN : ";
			cin >> secim;
		}

		return secim;
	}
	void karakter_özellik_atama(string karakter_ismi, int hasar, int can, int para, int govde_zirhi, int bacak_zirhi) {
		this->karakter_ismi = karakter_ismi;
		set_hasar(hasar);
		set_can(can);
		set_para(para);
		set_govde_zirhi(govde_zirhi);
		set_bacak_zirhi(bacak_zirhi);

	}

};



class menu :public karakter_secimi, public giris_mekan {


public:
	int secim_zirh;

	bool magaraya_girebilir_mi() {
		if (l.toplam() >= get_magara_min_giris()) {
			return true;
		}
		else {
			return false;
		}
	}
	bool nehire_girebilir_mi() {

		if (l.toplam() >= get_nehir_min_giris()) {
			return true;
		}
		else {
			return false;
		}
	}

	void giremez_magara() {
		yukleniyor();
		cout << endl;
		cout << "-------------------------------------------------YETERSİZ TECRÜBE-------------------------------------------------------" << endl << endl;
		cout << "Mağaraya girebilmen için en az  " << get_magara_min_giris() << " düşman öldürmen gerekiyor" << endl << endl;
		cout << "Öldürdüğün toplam düşman sayısı : " << l.toplam() << endl << endl;
		cout << "ANA MENÜYE DÖNMEK İÇİN HERHANGİ BİR SAYI GİR : ";
		int a;
		cin >> a;
	}
	void giremez_nehir() {
		yukleniyor();
		cout << endl;
		cout << "-------------------------------------------------YETERSİZ TECRÜBE-------------------------------------------------------" << endl << endl;
		cout << "Nehire girebilmen için en az " << get_nehir_min_giris() << " düşman öldürmen gerekiyor." << endl << endl;
		cout << "Öldürdüğün toplam düşman sayısı : " << l.toplam() << endl << endl;
		cout << "ANA MENÜYE DÖNMEK İÇİN HERHANGİ BİR SAYI GİR : ";
		int a;
		cin >> a;
	}


	void karakter_ozellikleri() {
		yukleniyor();
		cout << "---------------------------------------------KARAKTER ÖZELLİKLERİ-------------------------------------------------------" << endl << endl;
		cout << "Oyuncu Adı : " << get_isim() << endl;
		cout << "Mevcut Can : " << get_can() << endl;
		cout << "Mevcut Hasar : " << get_hasar() << endl;
		cout << "Mevcut Gövde Zırhı : " << get_govde_zirhi() << endl;
		cout << "Mevcut Bacak Zırhı : " << get_bacak_zirhi() << endl;
		cout << "Öldürülen Toplam Düşman Sayısı : " << l.toplam() << endl;
		cout << "Mevcut Para : " << get_para() << " NP" << endl << endl;
		cout << get_isim() << " ANA MENÜYE DÖNMEK İÇİN HERHANGİ BİR SAYİ GİR : ";
		int secim1;
		cin >> secim1;
		cout << "ANA MENÜYE DÖNÜYORSUN...";
	}



	void eve_git() {
		int dinmenme_maliyeti = 200;
		yukleniyor();

		cout << "---------------------------------------------EV-------------------------------------------------------------------------" << endl << endl;
		cout << "Evde her dinlenişinde karakterin 25 can puanı kazanır " << endl << endl;;
		cout << "Mevcut paran  : " << get_para() << " NP" << endl;
		cout << "Mevcut can : " << get_can() << endl << endl;
		cout << "Dinlenme bedeli : " << dinmenme_maliyeti << " NP" << endl << endl;
		cout << "Dinlenmek istiyor musun ? " << endl << endl;
		cout << "1-> DİNLEN." << endl;
		cout << "2-> ANA MENÜYE DÖN." << endl << endl;
		cout << "SEÇİMİN : ";
		int devam_menu;
		cin >> devam_menu;
		cout << endl;

		switch (devam_menu) {

		case 1:

			if (get_para() >= dinmenme_maliyeti) {
				set_para(get_para() - dinmenme_maliyeti);
				cout << "DİNLENİYORSUN..." << endl << endl;
				Sleep(2500);
				if (get_can() > 75) {
					set_can(100);
				}
				else if (get_can() < 75) {
					set_can(get_can() + 25);
				}
				cout << "Şuanki can : " << get_can() << endl << endl;
				cout << "Şuanki mevcut paran : " << get_para() << " NP" << endl << endl;
				cout << "1-> EVDE BİRAZ DAHA VAKİT GEÇİR." << endl;
				cout << "2-> ANA MENÜYE DÖN." << endl << endl;
				cout << "SEÇİMİN : ";
				int secim2;
				cin >> secim2;
				cout << endl;
				if (secim2 == 1) {
					eve_git();

				}
				else {
					cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
					Sleep(1500);
					ana_menu();
				}
			}
			else {
				cout << "PARAN YETERSİZ!!!" << endl << endl;
				cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
				Sleep(2000);
				ana_menu();
			}
			break;
		case 2:
			cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
			Sleep(1500);
			ana_menu();
			break;

		default:
			cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
			cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(2000);
			ana_menu();
			break;

		}

	}




	void canavar_sayisi_kacma() {
		int ihtimal;
		srand(time(NULL));
		ihtimal = 1 + rand() % 4;
		switch (ihtimal) {
		case 1:
			cout << "Kaçarken hiç para düşürmedin..." << endl << endl;

			break;

		case 2:
			cout << "Kaçarken " << get_para() / 4 << " NP düşürdün..." << endl << endl;
			set_para(get_para() * 1 / 4);

			break;
		case 3:
			cout << "Kaçarken " << get_para() * 2 / 4 << " NP düşürdün..." << endl << endl;
			set_para(get_para() * 2 / 4);

			break;

		case 4:
			cout << "Kaçarken " << get_para() * 3 / 4 << " NP düşürdün..." << endl << endl;
			set_para(get_para() * 3 / 4);

			break;
		case 5:
			cout << "Kaçarken paranın tamamını  düşürdün..." << endl << endl;
			set_para(get_para() * 0);

			break;
		default:
			cout << "Kaçarken paranızın tamamını  düşürdün..." << endl << endl;
			set_para(get_para() * 0);

			break;
		}

	}

	int dusman_sayisi;
	void mekanlar_ortak() {
		yukleniyor();
		cout << "---------------------------------------------" << mekan->get_isim() << "----------------------------------------------------------------------" << endl << endl;
		cout << "BURDA KARŞINA 1-5 " << dusman->get_canavar_isim() << " ÇIKABİLİR.SANŞLIYSAN HİÇ " << dusman->get_canavar_isim() << " DA ÇIKMAYABİLİR TABİKİ : )" << endl << endl;
		cout << dusman->get_canavar_isim() << "LARIN ÖZELLİKLERİ" << endl;
		cout << "Can : " << dusman->get_canavar_can() << endl;
		cout << "Hasar : " << dusman->get_canavar_hasar() << endl << endl;
		cout << "KARAKTERİNİN ÖZELLİKLERİ" << endl;
		cout << "Can : " << get_can() << endl;
		cout << "Hasar : " << get_hasar() << endl;
		cout << "Gövde zırhı : " << get_govde_zirhi() << endl;
		cout << "Bacak zırhı : " << get_bacak_zirhi() << endl << endl;
		dusman_sayisi;
		srand(time(NULL));
		dusman_sayisi = 0 + rand() % 6;
		if (dusman_sayisi == 0) {
			cout << "KARŞINA HİÇ " << dusman->get_canavar_isim() << " ÇIKMADI. ŞANSLISIN..." << endl << endl;
			Sleep(1500);
			cout << "Mevcut canın : " << get_can() << endl << endl;
			cout << "Kazandığın ödül miktari : " << dusman->get_odul() << " NP" << endl << endl;
			set_para(dusman->get_odul() + get_para());

			mekanlar_kontrol();

		}
		else {
			cout << "Karşına " << dusman_sayisi << " tane " << dusman->get_canavar_isim() << " çıktı!!!" << endl << endl;
			cout << "Savaşmak istiyor musun ? " << endl << endl;
			cout << "1-> SAVAŞ" << endl;
			cout << "2-> KAÇ" << endl << endl;
			int savas_tercihi;
			cout << "SEÇİMİN : ";
			cin >> savas_tercihi;
			cout << endl;

			if (savas_tercihi == 2) {
				cout << "KAÇMAYA ÇALIŞIYORSUN..." << endl << endl;
				Sleep(1500);


				yukleniyor();
				cout << "---------------------------------------------" << mekan->get_isim() << "----------------------------------------------------------------------" << endl << endl;
				canavar_sayisi_kacma();
				mekanlar_kontrol();

			}

			cout << "SAVAŞIYORUSUNUZ..." << endl << endl;
			Sleep(2000);

			int mevcut_can_puani = get_can() + get_govde_zirhi() + get_bacak_zirhi();
			int toplam_dusman_hasari = dusman->get_canavar_hasar() * dusman_sayisi;
			int toplam_dusman_cani = dusman->get_canavar_can() * dusman_sayisi;
			yukleniyor();
			cout << "---------------------------------------------" << mekan->get_isim() << "----------------------------------------------------------------------" << endl << endl;
			if (get_hasar() >= toplam_dusman_cani) {
				if (toplam_dusman_hasari >= mevcut_can_puani) {

					cout << dusman->get_canavar_isim() << "LARI ÖLDÜREMEDİNİZ." << endl << endl;
					cout << dusman->get_canavar_isim() << "LAR KAÇTI" << endl;
					Sleep(1500);
					if (get_govde_zirhi() + get_bacak_zirhi() > toplam_dusman_hasari) {

					}
					else if (get_govde_zirhi() + get_bacak_zirhi() < toplam_dusman_hasari) {
						set_can(mevcut_can_puani - toplam_dusman_hasari);

					}
					cout << "Mevcut canın : " << get_can() << endl << endl;
					cout << "HİÇ" << dusman->get_canavar_isim() << " DERİSİ KAZANAMADIN." << endl << endl;
					mekanlar_kontrol();
				}
				else if (toplam_dusman_hasari < mevcut_can_puani) {
					l.add_node(dusman_sayisi);
					cout << dusman->get_canavar_isim() << "LARI ÖLDÜRDÜN..." << endl << endl;
					Sleep(1500);
					if (get_govde_zirhi() + get_bacak_zirhi() > toplam_dusman_hasari) {


					}
					else if (get_govde_zirhi() + get_bacak_zirhi() < toplam_dusman_hasari) {
						set_can(mevcut_can_puani - toplam_dusman_hasari);

					}
					set_kurt_postu_sayisi(get_kurt_postu_sayisi() + dusman_sayisi);
					cout << "Mevcut canın : " << get_can() << endl << endl;
					cout << "Kazandığın para miktarı : " << dusman->get_odul() << endl << endl;
					cout << "KAZANDIĞIN " << dusman->get_canavar_isim() << " DERİSİ SAYISI : " << dusman_sayisi << endl << endl;
					mekanlar_kontrol();
				}
			}
			else if (get_hasar() < toplam_dusman_cani) {
				if (toplam_dusman_hasari < mevcut_can_puani) {

					cout << dusman->get_canavar_isim() << "LARI ÖLDÜREMEDİN." << endl << endl;
					cout << dusman->get_canavar_isim() << "LAR KAÇTI" << endl;
					Sleep(1500);
					if (get_govde_zirhi() + get_bacak_zirhi() > toplam_dusman_hasari) {

						cout << "Mevcut canın : " << get_can() << endl << endl;
						cout << "Hiç" << dusman->get_canavar_isim() << " DERİSİ KAZANAMADIN." << endl << endl;

					}
					else if (get_govde_zirhi() + get_bacak_zirhi() < toplam_dusman_hasari) {
						set_can(mevcut_can_puani - toplam_dusman_hasari);
						cout << "Mevcut canın : " << get_can() << endl << endl;
						cout << "HİÇ " << dusman->get_canavar_isim() << " DERİSİ KAZANAMADIN." << endl << endl;

					}
					mekanlar_kontrol();
				}
				else {
					set_can(0);
					cout << dusman->get_canavar_isim() << "LAR TARAFINDAN ÖLDÜRÜLDÜN.." << endl << endl;
					Sleep(1500);
					cout << "---------------------------------------------OYUN BİTTİ-----------------------------------------------------------------" << endl << endl;
					//set_can(mevcut_can_puani);
				}

			}



		}


	}
	void mekanlar_kontrol() {

		cout << "1-> " << "DOLAŞMAYA DEVAM ET " << mekan->get_isim() << endl;
		cout << "2-> ANA MENÜYE DÖN. " << endl << endl;
		cout << "SEÇİMİN : ";
		int devam;
		cin >> devam;
		cout << endl;
		switch (devam)
		{
		case 1:
			cout << " YÖNLENDİRİLİYORSUN " << mekan->get_isim() << "..." << endl;
			Sleep(1500);
			if (mekan->get_isim() == "ORMAN") {

				ormana_git();
			}
			else if (mekan->get_isim() == "MAĞARA") {
				magaraya_git();
			}
			else
			{
				nehire_git();
			}

			break;
		case 2:

			cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
			Sleep(1500);
			ana_menu();
			break;
		default:

			cout << "HATALI BİR SEÇİM YAPTIN" << endl << endl;
			cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(1500);
			ana_menu();
			break;
		}

	}


	dusmanlar* dusman = new dusmanlar;
	mekanlar* mekan = new mekanlar;



	void ormana_git() {
		mekan->set_isim("ORMAN");
		dusman->set_canavar_isim("KURT");
		dusman->set_canavar_can(30);
		dusman->set_canavar_hasar(40);
		dusman->set_get_odul(100);
		mekanlar_ortak();




	}void magaraya_git() {
		mekan->set_isim("MAĞARA");
		dusman->set_canavar_isim("AYI");
		dusman->set_canavar_can(70);
		dusman->set_canavar_hasar(80);
		dusman->set_get_odul(500);

		mekanlar_ortak();


	}




	void nehire_git() {
		mekan->set_isim("NEHİR");
		dusman->set_canavar_isim("TİMSAH");
		dusman->set_canavar_can(110);
		dusman->set_canavar_hasar(120);
		dusman->set_get_odul(2500);

		mekanlar_ortak();

	}










	void zirh_dukkanina_git() {
		int govdez1_zırh = 100, govdez1_fiyat = 13000, govdez2_zırh = 150, govdez2_fiyat = 18000, govdez3_zırh = 200, govdez3_fiyat = 24000, govdez4_zırh = 250, govdez4_fiyat = 28000, govdez5_zırh = 300, govdez5_fiyat = 31000;
		int bacak1_zırh = 10, bacak1_fiyat = 1500, bacak2_zırh = 20, bacak2_fiyat = 2800, bacak3_zırh = 30, bacak3_fiyat = 5100, bacak4_zırh = 40, bacak4_fiyat = 6400, bacak5_zırh = 50, bacak5_fiyat = 7500;
		yukleniyor();
		cout << "---------------------------------------------ZIRH DÜKKANI---------------------------------------------------------------" << endl << endl;
		cout << "1-> GÖVDE ZIRHI AL" << endl;
		cout << "2-> BACAK ZIRHI AL" << endl;
		cout << "3-> ANA MENUYE DÖN" << endl << endl;
		cout << "SEÇİMİNİZ : ";
		int kontrol;
		cin >> kontrol;
		switch (kontrol)
		{
		case 1:
			yukleniyor();
			cout << "---------------------------------------------GÖVDE ZIRHI----------------------------------------------------" << endl << endl;
			cout << "MEVCUT GÖVDE ZIRHIN : " << get_govde_zirhi() << endl;
			cout << "MEVCUT PARAN : " << get_para() << " NP" << endl << endl;
			cout << "MEVCUT PARAN : " << get_para() << endl << endl;
			cout << "1.Seviye Bir Yükseltme   -> Karakterine " << govdez1_zırh << " gövde zırhı ekler -> " << "satın alma fiyatı = " << govdez1_fiyat << " NP" << endl;
			cout << "2.Seviye İki Yükseltme   -> Karakterine " << govdez2_zırh << " gövde zırhı ekler -> " << "satın alma fiyatı = " << govdez2_fiyat << " NP" << endl;
			cout << "3.Seviye Üç Yükseltme    -> Karakterine " << govdez3_zırh << " gövde zırhı ekler -> " << "satın alma fiyatı = " << govdez3_fiyat << " NP" << endl;
			cout << "4.Seviye Dört Yükseltme  -> Karakterine " << govdez4_zırh << " gövde zırhı ekler -> " << "satın alma fiyatı = " << govdez4_fiyat << " NP" << endl;
			cout << "5.Seviye Beş Yükseltme   -> Karakterine " << govdez5_zırh << " gövde zırhı ekler -> " << "satın alma fiyatı = " << govdez5_fiyat << " NP" << endl;
			cout << "6-> Zırh Dukkanına Dön" << endl;
			cout << "7-> Ana Meüye Dön " << endl << endl;
			cout << "YAPMAK İSTEDİĞİN İŞLEMİ SEÇ : ";
			int kontrol2;
			cin >> kontrol2;
			if (kontrol2 == 1) {
				if (get_para() >= govdez1_fiyat) {
					set_para(get_para() - govdez1_fiyat);
					set_govde_zirhi(get_govde_zirhi() + govdez1_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol2 == 2) {

				if (get_para() >= govdez2_fiyat) {
					set_para(get_para() - govdez2_fiyat);
					set_govde_zirhi(get_govde_zirhi() + govdez2_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol2 == 3) {

				if (get_para() >= govdez3_fiyat) {
					set_para(get_para() - govdez3_fiyat);
					set_govde_zirhi(get_govde_zirhi() + govdez3_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol2 == 4) {

				if (get_para() >= govdez4_fiyat) {
					set_para(get_para() - govdez4_fiyat);
					set_govde_zirhi(get_govde_zirhi() + govdez4_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol2 == 5) {

				if (get_para() >= govdez5_fiyat) {
					set_para(get_para() - govdez5_fiyat);
					set_govde_zirhi(get_govde_zirhi() + govdez5_fiyat);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol2 == 6) {
				cout << "ZIRH DÜKKANINA DÖNÜYORSUN..." << endl;
				Sleep(1700);
				zirh_dukkanina_git();

			}
			else if (kontrol2 == 7) {
				cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
				Sleep(1700);
				ana_menu();
			}
			else
			{
				cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
				cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
				Sleep(1800);
				ana_menu();
			}

			break;
		case 2:
			cout << "---------------------------------------------BACAK ZIRHI----------------------------------------------------" << endl << endl;
			cout << "MEVCUT BACAK ZIRHIN : " << get_bacak_zirhi() << endl;
			cout << "MEVCUT PARAN : " << get_para() << " NP" << endl << endl;
			cout << "1.Seviye bir yükseltme   -> Karakterine " << bacak1_zırh << " bacak zırhı ekler -> " << "satın alma fiyatı = " << bacak1_fiyat << " NP" << endl;
			cout << "2.Seviye iki yükseltme    -> Karakterine " << bacak2_zırh << " bacak zırhı ekler -> " << "satın alma fiyatı = " << bacak2_fiyat << " NP" << endl;
			cout << "3.Seviye üç yükseltme    -> Karakterine " << bacak3_zırh << " bacak zırhı ekler -> " << "satın alma fiyatı = " << bacak3_fiyat << " NP" << endl;
			cout << "4.Seviye Dört Yükseltme  -> Karakterine " << bacak4_zırh << " bacak zırhı ekler -> " << "satın alma fiyatı = " << bacak4_fiyat << " NP" << endl;
			cout << "5.Seviye Beş Yükseltme   -> Karakterine " << bacak5_zırh << " bacak zırhı ekler -> " << "satın alma fiyatı = " << bacak5_fiyat << " NP" << endl;
			cout << "6-> Zırh Dukkanına Dön" << endl;
			cout << "7-> Ana Menüye Dön" << endl << endl;
			cout << "YAPMAK İSTEDİĞİN İŞLEMİ SEÇ  : ";

			int kontrol3;
			cin >> kontrol3;
			yukleniyor();
			if (kontrol3 == 1) {

				if (get_para() >= bacak1_fiyat) {
					max_zırh_bacak();
					set_para(get_para() - bacak1_fiyat);
					set_bacak_zirhi(get_bacak_zirhi() + bacak1_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol3 == 2) {

				if (get_para() >= bacak2_fiyat) {
					max_zırh_bacak();
					set_para(get_para() - bacak2_fiyat);
					set_bacak_zirhi(get_bacak_zirhi() + bacak2_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol3 == 3) {

				if (get_para() >= bacak3_fiyat) {
					max_zırh_bacak();
					set_para(get_para() - bacak3_fiyat);
					set_bacak_zirhi(get_bacak_zirhi() + bacak3_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol3 == 4) {

				if (get_para() >= bacak4_fiyat) {
					max_zırh_bacak();
					set_para(get_para() - bacak4_fiyat);
					set_bacak_zirhi(get_bacak_zirhi() + bacak4_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol3 == 5) {

				if (get_para() >= bacak5_fiyat) {
					max_zırh_bacak();
					set_para(get_para() - bacak5_fiyat);
					set_bacak_zirhi(get_bacak_zirhi() + bacak5_zırh);

					zirh_satin_basarili();
				}
				else {
					zirh_satin_bararisiz();
				}
			}
			else if (kontrol3 == 6) {
				cout << "ZIRH DÜKKANINA DÖNÜYORSUN..." << endl;
				Sleep(1700);
				zirh_dukkanina_git();

			}
			else if (kontrol3 == 7) {
				cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
				Sleep(1500);
				ana_menu();
			}
			else
			{
				cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
				cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
				Sleep(1700);
				ana_menu();
			}
		case 3:
			cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
			Sleep(1700);
			ana_menu();

			break;

		default:
			cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
			cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(1700);
			ana_menu();
			break;
		}
	}



	void zirh_satin_basarili() {
		cout << endl;
		cout << "ZIRHI BAŞARIYLA SATIN ALDIN..." << endl;
		cout << "ZIRH DÜKKANINA YÖNLENDİRİLİYORSUN..." << endl;
		Sleep(1800);
		zirh_dukkanina_git();
	}

	void zirh_satin_bararisiz() {
		cout << endl;
		cout << "YÜKSELTMEYİ ALMAK İÇİN PARAN YETERİ DEĞİL!!!" << endl;
		cout << "ZIRH DÜKKANINA YÖNLENDİRİLİYORSUN..." << endl;
		Sleep(1800);
		zirh_dukkanina_git();
	}
	void max_zırh_bacak() {
		if (get_bacak_zirhi() > 100) {
			cout << "MAKSİMUM BACAK ZIRHINA ULAŞTIN!!!" << endl << endl;
			cout << "ZIRH DÜKKANINA YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(2000);
			zirh_dukkanina_git();
		}
	}









	void silah_secimi() {
		int s1_hasar = 10, s1_fiyat = 2000, s2_hasar = 30, s2_fiyat = 5000, s3_hasar = 50, s3_fiyat = 8000, s4_hasar = 70, s4_fiyat = 11500, s5_hasar = 100, s5_fiyat = 14000;
		yukleniyor();
		cout << "-------------------------------------Silah dukkanına hosgeldiniz-----------------------------------------------" << endl << endl;
		cout << "MEVCUT HASARIN : " << get_hasar() << endl;
		cout << "MEVCUT PARAN : " << get_para() << endl << endl;
		cout << "1.Seviye Bir Yükseltme   -> Karakterine " << s1_hasar << " hasar ekler -> " << "satın alma fiyatı = " << s1_fiyat << " NP" << endl;
		cout << "2.Seviye İki Yükseltme   -> Karakterine " << s2_hasar << " hasar ekler -> " << "satın alma fiyatı = " << s2_fiyat << " NP" << endl;
		cout << "3.Seviye Üç Yükseltme    -> Karakterine " << s3_hasar << " hasar ekler -> " << "satın alma fiyatı = " << s3_fiyat << " NP" << endl;
		cout << "4.Seviye Dört Yükseltme  -> Karakterine " << s4_hasar << " hasar ekler -> " << "satın alma fiyatı = " << s4_fiyat << " NP" << endl;
		cout << "5.Seviye Beş Yükseltme   -> Karakterine " << s5_hasar << " hasar ekler -> " << "satın alma fiyatı = " << s5_fiyat << " NP" << endl;
		cout << "6.Ana Menüye Dön" << endl << endl;
		cout << "SEÇİMİN : ";

		int secim;
		cin >> secim;
		cout << endl;
		switch (secim) {
			yukleniyor();

		case 1:

			if (get_para() >= s1_fiyat) {
				max_hasar();
				set_para(get_para() - s1_fiyat);
				set_hasar(get_hasar() + s1_hasar);
				silah_satin_basarili();
			}
			else {
				silah_satin_bararisiz();
			}

			break;
		case 2:

			if (get_para() >= s2_fiyat) {
				max_hasar();
				set_para(get_para() - s2_fiyat);
				set_hasar(get_hasar() + s2_hasar);
				silah_satin_basarili();
			}
			else {
				silah_satin_bararisiz();
			}

			break;
		case 3:

			if (get_para() >= s3_fiyat) {
				max_hasar();
				set_para(get_para() - s3_fiyat);
				set_hasar(get_hasar() + s3_hasar);
				silah_satin_basarili();
			}
			else {
				silah_satin_bararisiz();
			}

			break;
		case 4:

			if (get_para() >= s4_fiyat) {
				max_hasar();
				set_para(get_para() - s4_fiyat);
				set_hasar(get_hasar() + s4_hasar);
				silah_satin_basarili();
			}
			else {
				silah_satin_bararisiz();
			}

			break;
		case 5:

			if (get_para() >= s5_fiyat) {
				max_hasar();
				set_para(get_para() - s5_fiyat);
				set_hasar(get_hasar() + s5_hasar);
				silah_satin_basarili();
			}
			else {
				silah_satin_bararisiz();
			}

			break;
		case 6:
			cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
			Sleep(1700);

			break;
		default:
			cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
			cout << "ANA MENÜYE YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(1700);


			break;
		}

	}

	void silah_satin_basarili() {
		cout << "YUKSELTMEYİ BAŞARIYLA SATIN ALDIN..." << endl << endl;
		cout << "SİLAH DÜKKANINA YÖNLENDİRİLİYORSUN..." << endl;
		Sleep(1800);
		silah_secimi();
	}
	void silah_satin_bararisiz() {
		cout << "YÜKSELTMEYİ ALMAK İÇİN PARAN YETERİ DEĞİL!!!" << endl << endl;
		cout << "SİLAH DÜKKANINA YÖNLENDİRİLİYORSUN..." << endl;
		Sleep(1800);
		silah_secimi();
	}
	void max_hasar() {

		if (get_hasar() > 300) {
			cout << "Maksimum hasara ulaştın..." << endl << endl;
			cout << "SİLAH DÜKKANINA DÖNÜYORSUN..." << endl;
			Sleep(2000);
			silah_secimi();
		}
	}








	void kurt_derisi_satma() {

		int tercih1_k = 10, tercih_para1_k = 1000, tercih2_k = 20, tercih_para2_k = 2250, tercih3_k = 30, tercih_para3_k = 3750;
		yukleniyor();
		cout << "---------------------------------------------" << dusman->get_canavar_isim() << " DERİSİ SATIŞ EKRANI--------------------------------------------------" << endl << endl;
		cout << "Sahip oluğun " << dusman->get_canavar_isim() << " derisi sayısı : " << get_kurt_postu_sayisi() << endl << endl;
		cout << "1-> " << tercih1_k << " adet " << dusman->get_canavar_isim() << " derisi sat ve " << tercih_para1_k << " NP kazan" << endl;
		cout << "2-> " << tercih2_k << " adet " << dusman->get_canavar_isim() << " derisi sat ve " << tercih_para2_k << " NP kazan" << endl;
		cout << "3-> " << tercih3_k << " adet " << dusman->get_canavar_isim() << " derisi sat ve " << tercih_para3_k << " NP kazan" << endl;
		cout << "4->Hayvan postu satış ekranına dön" << endl << endl;
		cout << "SEÇİMİN : ";
		cin >> secim;
		cout << endl;

		if (secim == 1) {
			if (get_kurt_postu_sayisi() >= tercih1_k) {
				set_kurt_postu_sayisi(get_kurt_postu_sayisi() - tercih1_k);
				set_para(get_para() + tercih_para1_k);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih1_k << " " << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}
		}
		else if (secim == 2) {
			if (get_kurt_postu_sayisi() >= tercih2_k) {
				set_kurt_postu_sayisi(get_kurt_postu_sayisi() - tercih2_k);
				set_para(get_para() + tercih_para2_k);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih2_k << " " << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}
		}
		else if (secim == 3) {
			if (get_kurt_postu_sayisi() >= tercih3_k) {
				set_kurt_postu_sayisi(get_kurt_postu_sayisi() - tercih3_k);
				set_para(get_para() + tercih_para3_k);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih3_k << " " << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}

		}
		else if (secim == 4) {
			cout << "HAYVAN POSTU SATIŞ EKRANINA DÖNÜYORSUN..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();
		}
		else {
			cout << "HATALI BİR SEÇİM YAPTINIZ!!!" << endl << endl;
			cout << "HAYVAN POSTU SATIŞ EKRANINA YÖNLENDİRİLİYORSUNUZ..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();
		}
	}



	void ayi_derisi_satma() {

		int tercih1_a = 10, tercih_para1_a = 3000, tercih2_a = 20, tercih_para2_a = 7000, tercih3_a = 30, tercih_para3_a = 11000;
		yukleniyor();
		cout << "---------------------------------------------" << dusman->get_canavar_isim() << " DERİSİ SATIŞ EKRANI--------------------------------------------------" << endl << endl;
		cout << "Sahip oluğunuz ayı postu sayısı : " << get_ayi_postu_sayisi() << endl << endl;
		cout << "1-> " << tercih1_a << " adet ayı postu sat ve " << tercih_para1_a << " NP kazan" << endl;
		cout << "2-> " << tercih2_a << " adet ayı postu sat ve " << tercih_para2_a << " NP kazan" << endl;
		cout << "3-> " << tercih3_a << " adet ayı postu sat ve " << tercih_para3_a << " NP kazan" << endl;
		cout << "4->Hayvan postu satış ekranına dön" << endl;
		cout << "SEÇİMİN : ";
		cin >> secim;
		cout << endl;

		if (secim == 1) {
			if (get_ayi_postu_sayisi() >= tercih1_a) {
				set_ayi_postu_sayisi(get_ayi_postu_sayisi() - tercih1_a);
				set_para(get_para() + tercih_para1_a);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih1_a << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}
		}
		else if (secim == 2) {
			if (get_ayi_postu_sayisi() >= tercih2_a) {
				set_ayi_postu_sayisi(get_ayi_postu_sayisi() - tercih2_a);
				set_para(get_para() + tercih_para2_a);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih2_a << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}
		}
		else if (secim == 3) {
			if (get_ayi_postu_sayisi() >= tercih3_a) {
				set_ayi_postu_sayisi(get_ayi_postu_sayisi() - tercih3_a);
				set_para(get_para() + tercih_para3_a);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih3_a << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}

		}
		else if (secim == 4) {
			cout << "HAYVAN POSTU SATIŞ EKRANINA DÖNÜYORSUN..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();
		}
		else {
			cout << "Hatalı bir seçim yaptın!!!" << endl << endl;
			cout << "HAYVAN POSTU SATIŞ EKRANINA YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();
		}

	}



	void timsah_derisi_satma() {
		int tercih1_t = 10, tercih_para1_t = 6000, tercih2_t = 20, tercih_para2_t = 14000, tercih3_t = 30, tercih_para3_t = 25000;
		yukleniyor();
		cout << "---------------------------------------------" << dusman->get_canavar_isim() << " DERİSİ SATIŞ EKRANI--------------------------------------------------" << endl << endl;
		cout << "Sahip olduğun timsah derisi sayısı  : " << get_timsah_derisi_sayisi() << endl << endl;
		cout << "1-> " << tercih1_t << " adet timsah derisi sat ve " << tercih_para1_t << " NP kazan" << endl;
		cout << "2-> " << tercih2_t << " adet timsah derisi sat ve " << tercih_para2_t << " NP kazan" << endl;
		cout << "3-> " << tercih3_t << " adet timsah derisi sat ve " << tercih_para3_t << " NP kazan" << endl;
		cout << "4->Hayvan postu satış ekranına dön" << endl;
		cout << "SEÇİMİN : ";
		cin >> secim;
		cout << endl;

		if (secim == 1) {
			if (get_timsah_derisi_sayisi() >= tercih1_t) {
				set_timsah_derisi_sayisi(get_timsah_derisi_sayisi() - tercih1_t);
				set_para(get_para() + tercih_para1_t);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih1_t << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}
		}
		else if (secim == 2) {
			if (get_timsah_derisi_sayisi() >= tercih2_t) {
				set_timsah_derisi_sayisi(get_timsah_derisi_sayisi() - tercih2_t);
				set_para(get_para() + tercih_para2_t);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih2_t << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}
		}
		else if (secim == 3) {
			if (get_timsah_derisi_sayisi() >= tercih3_t) {
				set_timsah_derisi_sayisi(get_timsah_derisi_sayisi() - tercih3_t);
				set_para(get_para() + tercih_para3_t);
				hayvan_postu_basarili();
			}
			else {
				cout << tercih3_t << dusman->get_canavar_isim() << " DERİSİNE SAHİP DEĞİLSİN" << endl << endl;
				hayvan_posut_basarisiz();
			}

		}
		else if (secim == 4) {
			cout << "HAYVAN POSTU SATIŞ EKRANINA DÖNÜYORSUN..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();
		}
		else {
			cout << "Hatalı bir seçim yaptınız!!!" << endl << endl;
			cout << "HAYVAN POSTU SATIŞ EKRANINA YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();
		}
	}

	void hayvan_postu_basarili() {
		cout << "Satış başarıyla gerçekleştirildi" << endl;
		cout << "Mevcut paran : " << get_para() << endl;
		Sleep(2000);
		cout << "HAYVAN POSTU SATIŞ EKRANINA YÖNLENDİRİLİYORSUN..." << endl;
		Sleep(1800);
		hayvan_postu_satmaya_git();
	}
	void hayvan_posut_basarisiz() {
		cout << "HAYVAN POSTU SATIŞ EKRANINA YÖNLENDİRİLİYORSUN..." << endl;
		Sleep(2000);
		hayvan_postu_satmaya_git();
	}

	void hayvan_postu_satmaya_git() {

		try {
			yukleniyor();
			cout << "---------------------------------------------HAYVAN POSTU SATIŞ EKRANI--------------------------------------------------" << endl << endl;
			cout << "Sahip olduğun kurt postu sayısı : " << get_kurt_postu_sayisi() << endl;
			cout << "Sahip olduğun ayı postu sayısı : " << get_ayi_postu_sayisi() << endl;
			cout << "Sahip olduğun timsah derisi sayısı : " << get_timsah_derisi_sayisi() << endl << endl;
			cout << "1-> KURT POSTU SAT" << endl;
			cout << "2-> AYI POSTU SAT" << endl;
			cout << "3-> TİMSAH POSTU SAT" << endl;
			cout << "4-> ANA MENÜYE DÖN" << endl << endl;
			cout << "SEÇİMİN : ";

			cin >> secim_zirh;
			if (secim_zirh == 1) {
				dusman->set_canavar_isim("KURT");
			}
			else if (secim_zirh == 2)
			{
				dusman->set_canavar_isim("AYI");
			}
			else
			{
				dusman->set_canavar_isim("TİMSAH");
			}
			switch (secim_zirh)
			{
			case 1:
				kurt_derisi_satma();
				break;


			case 2:

				ayi_derisi_satma();
				break;

			case 3:
				timsah_derisi_satma();

				break;

			case 4:
				cout << "ANA MENÜYE DÖNÜYORSUN..." << endl;
				Sleep(1500);
				ana_menu();
				break;

				//default:
					//cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
					//cout << "HAYVAN POSTU SATIŞ EKANINA  YÖNLENDİRİLİYORSUN..." << endl;
					//Sleep(1500);
					//hayvan_postu_satmaya_git();

					//break;
			}

		}
		catch (const std::exception&) {
			cout << "HATALI BİR SEÇİM YAPTIN!!!" << endl << endl;
			cout << "HAYVAN POSTU SATIŞ EKANINA  YÖNLENDİRİLİYORSUN..." << endl;
			Sleep(1500);
			hayvan_postu_satmaya_git();

		}
	}



	void baslangıc_ekrani() {
		cout << endl;
		cout << "---------------------------------------------OYUNA HOŞGELDİNİZ----------------------------------------------------------" << endl << endl;
		karakterler_menu();
	}void ana_menu() {


		kilavuz* k = new kilavuz;


		yukleniyor();
		cout << "------------------------------------------------ANA MENÜ----------------------------------------------------------------" << endl << endl;
		cout << "1-> MEVCUT KARAKTER ÖZELLİKLERİNİ GÖRÜNTÜLE" << endl;
		cout << "2-> EVE GİT" << endl;
		cout << "3-> ORMANA GİT" << endl;
		cout << "4-> MAGARAYA GİT " << endl;
		cout << "5-> NEHİRE GİT" << endl;
		cout << "6-> SİLAH DÜKKANINA GİT" << endl;
		cout << "7-> ZIRH DÜKKANINA GİT" << endl;
		cout << "8-> HAYVAN DERİSİ SATMAYA GİT" << endl;
		cout << "9-> OKU" << endl << endl;
		cout << "YAPMAK İSTEDİĞİNİZ İŞLEMİ GİRİNİZ" << endl << endl;
		cout << "SECİMİNİZ : ";
		int secim;
		cin >> secim;

		switch (secim)
		{
		case 1:
			karakter_ozellikleri();
			ana_menu();
			break;
		case 2:
			eve_git();
			ana_menu();
			break;
		case 3:
			if (get_can() != 0) {
				ormana_git();
			}
			else {
				break;
			}
			break;
		case 4:
			if (magaraya_girebilir_mi()) {
				if (get_can() != 0) {
					magaraya_git();
				}
				else {
					break;
				}
			}
			else
			{
				giremez_magara();
				ana_menu();
			}
			break;
		case 5:
			if (nehire_girebilir_mi()) {
				if (get_can() != 0) {
					nehire_git();
				}
				else {
					break;
				}
			}
			else
			{
				giremez_nehir();
				ana_menu();
			}
			break;
		case 6:
			silah_secimi();
			ana_menu();
			break;
		case 7:
			zirh_dukkanina_git();
			ana_menu();
			break;
		case 8:
			hayvan_postu_satmaya_git();
			ana_menu();
			break;
		case 9:
			k->oku();
			delete k;
			ana_menu();
			break;
		default:
			cout << "gecersiz bir secim yaptiniz" << endl;
			Sleep(2000);
			ana_menu();
			break;

		}

	}



};





int main() {
	setlocale(LC_ALL, "Turkish");
	//system("color F0");
	menu m1;
	m1.baslangıc_ekrani();
	m1.ana_menu();




	return 0;
}


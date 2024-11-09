
int main(){
    int pilihan;
    int inputPIN;
    int nominal22222;

    cout<<"===== Selamat Datang di ATM ====="<<endl;
    cout<<"Masukkan PIN ATM Anda : "; cin>>inputPIN;

    if (!pinATM(inputPIN)){
        cout<<"PIN Anda Salah!"<<endl;
        return 1;
    }

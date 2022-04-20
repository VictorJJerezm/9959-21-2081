#include <iostream>


using namespace std;

//Creacion de la clase
class Wizzard{
  // Base Wizzard
  public:
//Atributos generales del mago.
    Wizzard(int base_power, int base_hp, string base_name){
      power = base_power;
      hp = base_hp;
      name = base_name;

    }
//metodo para regresar el da�o
    float Damage(){
      return power;

    }
//Metodo para el da�o
    void GetDamage(int damage_value){
      hp -= damage_value;
      cout << name << " HP: " << hp << endl;
    }
//Metodo para hablar
    void Speak(string dialog){
      cout << name << ": " << dialog << endl;
    }
//Metodo para regresar la vida
    int GetHp(){
      return hp;
    }



  protected:
    float power, hp;
    string name;
};

//Sub clase que hereda la parte publica del mago
class FireWizzard:public Wizzard{
  // This wizzard has more power atack but less hp
  public: //Atributos de la subclase
    FireWizzard(int base_power, int base_hp, string base_name) : Wizzard(base_power, base_hp, base_name){
      power = base_power + 10;
      hp = base_hp - 30;
      name = base_name;
  }

};
//Sub clase que hereda la parte publica del mago
class IceWizzard:public Wizzard{
  // This wizzard has more life but less power atack

  public: //Atributos de la subclase
    IceWizzard(int base_power, int base_hp, string base_name) : Wizzard(base_power, base_hp, base_name){
      power = base_power - 20;
      hp = base_hp + 20;
      name = base_name;
  }

};


int main(){
  // apuntador al wizzard actual.
  Wizzard* current_wizzard; //Current_wizzard es el valor almacenado en wizzard
  // INIT HARRY
  Wizzard Harry(20, 100, "Harry");
  Harry.Speak("Hola bienvenidos al juego.");
  // INIT GANDALF
  IceWizzard Gandalf(20, 100, "Gandalf");
  // INIT DUMBLEDORE
  FireWizzard Dumbledore(20, 100, "Dumbledore");
  int round = 1;

  // PROCESS FIGHT
  while(Dumbledore.GetHp() > 0 && Gandalf.GetHp() > 0){
    if(round % 2){
      Harry.Speak("Dumbledore Recibe Dano!!");
      current_wizzard = &Dumbledore; //current_wizzard es igual a la direcci�n de dumbeldore?
      current_wizzard->GetDamage(Gandalf.Damage());// �que es ->?
    }else{
      Harry.Speak("Gandalf Recibe Dano!!");
      current_wizzard = &Gandalf; //current_wizzard es igual a la direcci�n de gandalf
      current_wizzard->GetDamage(Dumbledore.Damage());
    }
    cout << "***************************************" << endl;
    ++round;
  }

  // PRINTING WINNWE
  if(Dumbledore.GetHp() < 0){
    Harry.Speak("GANADOR!!! GANDALF");
  }else{
    Harry.Speak("GANADOR!!! DUMBLEDORE");
  }

  return 0;
}

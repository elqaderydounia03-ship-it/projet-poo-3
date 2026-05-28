#include<iostream>
using namespace std;
class Produit {
	private:
		int id ;
		float prix;
		string designation;
		int Quantite;
		
	public:
	Produit(){
				id=0;
				prix=0;
				designation="";
				Quantite=0;
				}
				
				Produit(int i , float p, string d ,int Q){
				id=i;
				prix=p;
				designation=d;
				Quantite=Q;
			}
			Produit(const Produit & p){
				id=p.id;
				prix=p.prix;
				designation=p.designation;
				Quantite=Q.Quantite
			}
			~Produit(){	
			}
			void afficher(){
				cout<<"\n id:"<<id<<endl;
				cout<<"prix:"<<prix<<endl;
				cout<<"designation:"<<designation<<endl;
				cout<<"Quantite:"<<Quantite<<endl;
				if(disponible)
				cout<<"disponible"<<endl;
				
				}else{
				
				cout<<"non disponible"<<endl;
			}
		}
		void medifierQuantite(float q){
			Quantite = Q;
			disponible= (quantite>0);
		}
		float valeurStock(){
			return prix*qauntite;
		}
		bool Rechercher(string t){
			return titre==t;
		}
		void Supprimer(){
			Disponible= false;
		}
		bool estDisponible(){
			return Disponible;
		};
						admis=false;
			}
			int getid(){
				return id;
			}
			
};
int main(){
	Produit bibliotheque[100];
	int nbProduit=0;
	
	int choix;
	do {
		cout<<"\n======menu====="<<endl;
		cout<<"1.ajouter Produit"<<endl;
		cout<<"2.afficher Produit"<<endl;
		cout<<"3.recherche Produit"<<endl;
		cout<<"4.Modifier Quantite"<<endl;
		cout<<"5.Calculer la valeur total de Stock"<<endl;
		cout<<"6.Afficher les Produits indisponible"<<endl;
		cout<<"0.Quitter"<<endl;
		cout<<"votre choix:";
		cin>>choix;
			switch (choix){
			case 1:{
				int id;
				string titre,auteur;
				float prix;
				
				cout<<"id";
				cin>>id;
				
				cin.ignore();
				
				cout <<"designation";
				getline(cin,designation);
				
				cout<<"Quantite";
				getline(cin,Quantite);
				
				cout<<"prix";
				cin>>prix;
				
				bibliotheque[nbProduit]=Produit(id,prix,designation,Quantite,true);
				nbProduit++;
				cout<<"Produit ajoute !"<<endl;
				break;
			}
			case 2:{
				cout<<"\n=== liste des Produits==="<<endl;
				
				for(int i;i<nbProduit;i++){
					bibliotheque[i].Afficher();
				}
				break;
			}

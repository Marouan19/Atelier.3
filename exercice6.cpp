#include <iostream>
using namespace std ;

class Personne
    {
        private string nom;
        private string prenom;
        private DateTime datenaissance;
 
        public string Nom
        {
            get { return nom; }
            set { nom = value; }
        }
        public string Prenom
        {
            get { return prenom; }
            set { prenom = value; }
        }
        public DateTime Datenaissance
        {
            get { return datenaissance; }
            set { datenaissance = value; }
        }
 
        public Personne(string n, string p, DateTime dn)
        {
            nom = n;
            prenom = p;
            datenaissance = dn;
        }
 
        public virtual void Afficher()
        {
            Console.Out.Write("Nom: " + nom + " Prénom: " + prenom + " Date de naissance: " + datenaissance);
        }
    }
    class Employe : Personne
    {
        private double salaire;
 
        public double Salaire
        {
            get { return salaire; }
            set { salaire = value; }
        }
 
        public Employe(string n, string p, DateTime dn, double s)
            : base(n, p, dn)
        {
            salaire = s;
        }
 
        public override void Afficher()
        {
            base.Afficher();
            Console.Out.WriteLine(" Salaire: " + salaire);
        }
    }
    class Chef : Employe
    {
        private string service;
 
        public string Service
        {
            get { return service; }
            set { service = value; }
        }
 
        public Chef(string n, string p, DateTime dn, double s, string ser)
            : base(n, p, dn, s)
        {
            service = ser;
        }
 
        public override void Afficher()
        {
            base.Afficher();
            Console.Out.Write(" Service: " + service);
        }
    }
class Directeur : Chef
    {
        private string societe;
 
        public string Societe
        {
            get { return societe; }
            set { societe = value; }
        }
 
        public Directeur(string n, string p, DateTime dn, double s, string ser, string soc) 
            :base(n, p, dn, s, ser)
        {
            societe = soc;
        }
 
        public override void Afficher()
        {
            base.Afficher();
            Console.Out.Write(" Société: " + societe);
        }
    }
class Program
    {
        static void Main(string[] args)
        {
            Personne[] P = new Personne[8];
            //Des Affectations utilisant le concept du polymorphisme
            P[0] = new Employe("NOM1", "PRENOM1", new DateTime(1985, 3, 4), 9000);
            P[1] = new Employe("NOM2", "PRENOM2", new DateTime(1984, 3, 4), 10000);
            P[2] = new Employe("NOM3", "PRENOM3", new DateTime(1983, 3, 4), 8000);
            P[3] = new Employe("NOM4", "PRENOM4", new DateTime(1982, 3, 4), 11000);
            P[4] = new Employe("NOM5", "PRENOM5", new DateTime(1981, 3, 4), 7000);
            P[5] = new Chef("NOM6", "PRENOM6", new DateTime(1988, 7, 6), 9000, "SERVICE1");
            P[6] = new Chef("NOM7", "PRENOM7", new DateTime(1984, 7, 6), 9000, "SERVICE2");
            P[7] = new Directeur("NOM8", "PRENOM8", new DateTime(1988, 7, 6), 9000, "SERVICE3","SOCIETE1");
 
            for (int i = 0; i < P.Length; i++)
            {
                P[i].Afficher();                       //Appel d'une méthode polymorphique (qui prend une nouvelle forme dans les classes dérivées)
                Console.Out.WriteLine(""); 
            }
 
            foreach (Personne p in P)
            {
                p.Afficher();
                Console.Out.WriteLine("");
            }
 
            Console.ReadKey();
        }
    }

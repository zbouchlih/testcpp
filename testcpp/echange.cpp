
void echange(double& x, double& y)
{
    double temporaire = x; //On sauvegarde la valeur de 'x'
    x = y;                //On remplace la valeur de 'x' par celle de 'y'
    y = temporaire;       //Et on utilise la valeur sauvegardée pour mettre l'ancienne valeur de 'x' dans 'y'
}
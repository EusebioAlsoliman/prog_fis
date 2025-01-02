int BuscarPersona(cPersona p[], int n, string apellidos)
{
    int izda, dcha, centro;
    bool encontrado;
    
    encontrado=false;
    izda=0;
    dcha=n-1;
    while((izda<=dcha)&&(encontrado==0))
    {
        centro=(izda+dcha)/2;
        if(p[centro].apellidos==apellidos) encontrado=true;
        else if(p[centro].apellidos<apellidos) izda=centro+1;
        else dcha=centro-1;
    }
    
    if(encontrado) return centro;
    else return -1;    
}
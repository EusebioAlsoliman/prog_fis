class cFecha
{
    public:
        int dia, mes, anio;
        void FechaActual(void);
} ;

void cFecha::FechaActual(void)
{
    //Lo que sea
    return;
}

int CalcularEdad(cFecha fnac)
{
    cFecha fhoy;
    int num;
    
    fhoy.FechaActual();
    
    //Resto los años
    num=fhoy.anio-fnac.anio;
    
    //Miro si los ha cumplido este año o no para ajustar
    if((fhoy.mes < fnac.mes) || 
        ((fhoy.mes==fnac.mes) && (fhoy.dia<fnac.dia)))
        num--;
        
    return num;
}
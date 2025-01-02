class cPersona
{
	public:
       string apellidos,nombre;
	   cFecha fnac;
	   string localidad;
	   float sueldo;
} ;

void IntercambiaPersonas(cPersona& p1, cPersona& p2)
{
	cPersona aux;
	aux=p1;
	p1=p2;
	p2=aux;
	return;
}

void OrdenaPersonas(cPersona p[], int n)
{
	int i,j;
	
	for(i=1; i<n; i++)
	  for(j=n-1;j>=i; j--)
		if(CalcularEdad(p[j].fnac)<CalcularEdad(p[j-1].fnac))
			IntercambiaPersonas(p[j],p[j-1]);
	return;
}
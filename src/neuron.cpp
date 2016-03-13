#include "lib/neuron.h"
#include <QList>
#include <QtMath>
void Neuron::SetW_0_5()
{
	for(int i=0;i<(this->W.size());i++)
	{
		this->W[i]=0.5;
	}
}

void Neuron::Activate()
{
	this->St=ActivFunc(GetSum());
}

double Neuron::GetSum()
{
	double _sum=0;
	for(int i=0;i<(this->W.size());i++)
	{
		_sum+=this->W[i]*this->Inp[i];
	}
	return _sum;
}

double Neuron::ActivFunc(double Value)
{
	return 1/(1+exp(-Value));
}
Neuron::Neuron()
{
	SetW_0_5();
}
Neuron::Neuron(QList<unsigned short> Data)
{
	this->Inp=Data;
	SetW_0_5();
}

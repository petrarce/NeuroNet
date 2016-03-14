#include "lib/layer.h"

Layer::Layer(int NumberOfNeurons,QList<unsigned short> *Data)
{
	this->Out=new QList<unsigned short>;
	this->Inp=Data;
	Neuron _tmpNeuron(Data);
	for(int i=0;i<NumberOfNeurons;i++)
	{
		this->Neurons.append(_tmpNeuron);
		this->Out->append(0);
	}
}
Layer::~Layer()
{
	delete this->Out;
}
void Layer::CalculateLayer()
{
	for(int i=0;i<this->Neurons.count();i++)
	{
		this->Neurons[i].Activate();
		(*this->Out)[i]=Neurons[i].St;
	}
}

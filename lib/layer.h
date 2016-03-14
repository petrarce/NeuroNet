#ifndef LAYER_H
#define LAYER_H
#include <QList>
#include "neuron.h"

class Layer
{
	public:
		QList<Neuron> Neurons;
		QList<unsigned short> *Inp;
		QList<unsigned short> *Out;

	public:
		void CalculateLayer();
		Layer(int NumberOfNeurons,QList<unsigned short> *Data);
		~Layer();

};

#endif // LAYER_H

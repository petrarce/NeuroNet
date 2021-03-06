#ifndef NEURON_H
#define NEURON_H
#include <QList>

class Neuron
{
		//------------ATRIBUTES----------
	public:
		QList<double> W;		//wiets of neuron
		QList<unsigned short> *Inp;
		QList<double> dW;
		double St;				//state of neuron after calculating the weights


		//------------METHODS------------
	public:
		void Activate();
		Neuron();
		Neuron(QList<unsigned short> *Data);
		~Neuron();

	private:
		double GetSum();
		double ActivFunc(double Value);
		void SetW_0_5();


};

#endif

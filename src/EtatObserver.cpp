#include "EtatObserver.h"
#include "Observable.h"


EtatObserver::~EtatObserver()
{
	//pour chaque objet observé, 
	//on lui dit qu'on doit supprimer l'observateur courant
	const_iterator ite = m_list.end();

	for (iterator itb = m_list.begin(); itb != ite; ++itb)
	{
		(*itb)->DelObs(this);
	}
}

void EtatObserver::Update(const Observable * observable) const
{
	std::cout << observable->Statut() << std::endl;
}

void EtatObserver::AddObs(Observable * obs)
{
	m_list.push_back(obs);
}

void EtatObserver::DelObs(Observable * obs)
{
	//on enlève l'objet observé.
	iterator it = std::find(m_list.begin(), m_list.end(), obs);
	if (it != m_list.end())
		m_list.erase(it);
}

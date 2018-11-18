#ifndef A_I
#define A_I

#include <vector>
#include "base.h"

namespace App {

	class Simulator {
	public:
		Simulator();
		void step_mins(int);
		void step_hours(int);
		void step_days(int);
	private:
		void step_min();
		std::vector<Base::Entity> entities;
	};

}

#endif

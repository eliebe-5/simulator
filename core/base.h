#ifndef B_I
#define B_I

#include <vector>

namespace Base {

	class State {
	public:
		State();
		virtual void enter_state();
		virtual void exit_state();
		virtual void update(); //One min at a time
	private:
	};


	class Entity {
	public:
		Entity();
		void run_state() { states[current_state].update(); };
	private:
		std::vector<State> states;
		unsigned short current_state;
	};

}

#endif

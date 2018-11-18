#include "app.h"
#include <thread>
#include <functional>

App::Simulator::Simulator(){

}

void App::Simulator::step_mins(int mins)
{
    for(int i = 0; i < mins; i++)
        step_min();
}

void App::Simulator::step_hours(int hours)
{
    for(int i = 0; i < hours*60; i++)
        step_min();
}

void App::Simulator::step_days(int days)
{
    for(int i = 0; i < days*24*60; i++)
        step_min();
}

void App::Simulator::step_min()
{
    //TODO multithreaded vector handling
    unsigned int nthreads = std::thread::hardware_concurrency();

    std::vector<std::thread> threads;
    for(int i = 0; i < nthreads; i++)
    {
        threads.push(
            std::thread(std::bind(
                [&](int start, int end){
                    for(;;)
                    {
                    }
                },
                i*nthreads*threads.size(),
                (i+1)*nthreads*thread.size()
            ))
        );
    }
}



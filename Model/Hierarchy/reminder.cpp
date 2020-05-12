#include "reminder.h"

Reminder::urgency Reminder::getUrgency() const {return urg;}

Reminder::Reminder(int x,Time start,Time end,Time alert,bool rep,std::string nome,
                   std::string descr,std::string luogo,Date data,std::vector<std::string>* tags)
    : Event(nome,descr,luogo,data,tags),
      EventWithDuration (start,end),
      Alert(alert,rep),
      urg(static_cast<urgency>(x))
{

}

Reminder* Reminder::clone() const {
    return new Reminder(*this);
}

void Reminder::serialize() const {

}



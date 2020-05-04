#include "model.h"

void Model::loadFromFile(const std::string& fileName) {

}

void Model::saveInFile(const std::string& fileName) const {
   /* XMLFileIO xmlFileIO(fileName);
    for(auto it = _container.cbegin(); it != _container.cend(); it++) {
        // xmlFileIO.write() info about the day es: <Date ... >


        std::vector<DeepPtr<Event>> events = it->getInfo();
        for(auto iit = events.cbegin(); iit != events.cend(); iit++) {
            iit->serialize(QStreamWriter);
        }
    }*/
}

bool Model::hasEventInDate(const Date& d) const {
    return _data.bucket_size(d) > 0;
}

void Model::insertEventInDate(const Date& d, Event* e) {
    _data.insert(d, DeepPtr<Event>(e));
}
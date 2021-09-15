#include <iostream>
#include <chrono>
#include <ctime> 
using namespace std;

class GEORUCache(){
    public:
        map<time_t, string> ruCache;
        int LRUSize;
        // constructor inits the cache as empty, the size of the cache as 5, can be changed
        Cache(){
            ruCache={};
            LRUSize=5;
        }

    //returns the cache in current state
    map<time_t, string> getCache(){
        return ruCache;
    }

    //searches for a specific value in cache, returning true if found, else false
    bool valueExistsInCache(string key){
        if(ruCache.end()==ruCache.find(key)){
            return false;
        }else{
            return true;
        }
    }

    // returnes the current size of the cache
    int getCacheSize(){
        return ruCache.getCacheSize();
    }

    //removes the oldest value from cache based on timestamp
    void removeOldestFromCache()){
        //init a timestamp value as empty
        time_t min_date=null;
        for(auto const& i : ruCache){
            //if the timestamp value is empty, then just set to the first iterations timestamp
            if(min_date==null){
              min_date=i.first();  
            }
            //if not null, and the timestamp is less then the old all timestamp, then replace
            else if(difftime(min_date,i.first()) > 0.0){
                min_date=i.first();
            }
        }
        //remove that all time oldest timestamp
        ruCache.erase(ruCache.find(min_date));
        
    }

    //add a new value to cache
    void updateCache(time_t key, string value){

        // current date/time based on current system
        time_t now = time(0);
        
        // if not more space, then remove the oldes value before inserting
        if(ruCache.valueExistsInCache(key) && ruCache.getCacheSize() >= LRUSize){
            removeOldestFromCache());
        }

        //now insert at the last index
        ruCache.insert({now,value});

    }

    //check if the cache is empty
    bool checkCacheEmpty() {
        return ruCache.empty();
    }

}


int main() {

    //example continents
    string inputExamplesContinents [7] = {'Antartica ', 'Europe ', 'North America ', 'South America ',
             'Africa ', 'Asia ', 'Oceania ' };

    // instantiate cache obj
    GEORUCache myCache;

    //walk through continents list
    for(int i=0;i<sites.size();i++){
        //if the currennt site already exists continue
        if(myCache.valueExistsInCache(sites[i])){
            continue;
        }
        //pick a random site to put in
        else{
            myCache.updateCache({sites[rand() % 7 + 1]});
        }
    }

    return 0;
}



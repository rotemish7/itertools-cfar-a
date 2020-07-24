//
// Created by rotem levy on 11/06/2020.
//

namespace itertools
{
    class range
    {
        int first_val, last_val ;
    public:
        
        class iterator
        {
            private:
                int curr;
            public:
                iterator(int t): curr(t) {}
             
                int operator *() {return curr;}
           
                const iterator operator ++(int) 
                {
                    iterator t = *(this);
                    curr ++;
                    return t;
                }
                iterator& operator ++() 
                {
                    curr ++;
                    return *(this);
                }
                bool operator !=(const iterator& other) const {return this->curr != other.curr;}
                bool operator ==(const iterator& other) const {return this->curr == other.curr;}
            };///end of iterator
        
            typedef int	value_type;
            range(int first, int last): first_val(first), last_val(last){}
            iterator begin(){ return iterator{first_val};} 
            iterator end() {return iterator{last_val};}
    };
}

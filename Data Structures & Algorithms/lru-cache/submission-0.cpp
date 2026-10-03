class LRUCache {
    struct node {
        node* next;
        node* prev;
        int val;
        int key;
    };

private:
    int cache_capacity;
    unordered_map<int, node*> m;
    node* head = new node();
    node* tail = new node();

public:
    LRUCache(int capacity) {
        cache_capacity = capacity;
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        auto it = m.find(key);
        if (it == m.end()) {
            return -1;
        }
        node* n = it->second;
        remove(n);
        add(n);
        return n->val;
    }

    void put(int key, int value) {
        auto it = m.find(key);
        if (it != m.end()) {
            node *n = it->second;
            n->val = value;
            remove(n);
            add(n);
            return;
        }
        node *n = new node();
        n->val  = value;
        n->key = key;
        if (m.size() == cache_capacity) {
            m.erase(tail->prev->key);
            remove(tail->prev);

        } 
        m[key] = n;
        add(n);
    }

    void remove(node* n) {
        node* prev = n->prev;
        node* next = n->next;
        prev->next = next;
        next->prev = prev;
    }
    void add(node* n) {
        node* next = head->next;
        n->next = next;
        next->prev = n;
        head->next = n;
        n->prev = head;
    }
};

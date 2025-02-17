#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <stack>
#include <queue>
#include <concurrent_priority_queue.h>

using namespace std;

struct User
{
	int guildId;
};

void GuildSystem()
{
	vector<User> users;

	for (int i = 0; i < 1000; i++)
	{
		User user;
		user.guildId = i;

		users.push_back(user);
	}

	users[5].guildId = users[1].guildId;

	for (auto& user : users)
	{
		if (user.guildId == 2)
		{
			user.guildId = 1;
		}
	}
}

class Naive_DisJointSet
{
public:
	Naive_DisJointSet(int n)
	{
		_parent = vector<int>(n,0);

		for (int i = 0; i < n; i++)
		{
			_parent[i] = i;
		}
	}

	int FindLeader(int u)
	{
		if(u == _parent[u])
			return u;

		int parent = _parent[u];
		return FindLeader(parent);
	}


	 
	void Merge(int u, int v)
	{
		int uLeader = FindLeader(u);
		int vLeader = FindLeader(v);

		if(uLeader == vLeader)
			return;

		_parent[vLeader] = uLeader;
	}

private:
	vector<int> _parent;
};

class DisJointSet
{
public:
	DisJointSet(int n)
	{
		_parent = vector<int>(n,0);
		_rank = vector<int>(n,1);

		for (int i = 0; i < n; i++)
		{
			_parent[i] = i;
		}
	}

	int FindLeader(int u)
	{
		if (u == _parent[u])
			return u;

		int parent = _parent[u];
		return FindLeader(parent);
	}

	void Merge(int u, int v)
	{
		int uLeader = FindLeader(u);
		int vLeader = FindLeader(v);

		if(uLeader == vLeader)
			return;

		if (_rank[uLeader] > _rank[vLeader])
		{
			std::swap(uLeader, vLeader);
		}

		_parent[uLeader] = vLeader;

		if(_rank[uLeader] == _rank[vLeader])
			_rank[vLeader]++;
	}

private:
	vector<int> _parent;
	vector<int> _rank;
};

int main()
{
	DisJointSet set(10);

	set.Merge(5,6);
	set.Merge(0,1);
	set.Merge(3,5);
	set.Merge(1,3);

	cout << set.FindLeader(1) << endl;

	return 0;
}
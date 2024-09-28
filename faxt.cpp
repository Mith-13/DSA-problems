vector<long long> fact;
long long currentFactorial = 1;
long long i = 1;

while (true)
{
    currentFactorial *= i;
    if (currentFactorial > n)
    {
        break;
    }
    fact.push_back(currentFactorial);
    ++i;
}
return fact;
}

vector<long long> fact(n + 1, 1);
vector<long long> t;
for (long long i = 1; i <= n; i++)
{
    if (fact[i] > n)
    {
        break;
    }
    fact[i] = fact[i - 1] * i;
    t.push_back(fact[]);
}

return t;
}
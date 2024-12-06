constexpr inline uint leq_pow2(const uint x) {return 1u << __lg(x);}
constexpr inline ull leq_pow2ll(const ull x) {return 1ull << __lg(x);}
constexpr inline uint geq_pow2(const uint x) {return x & (x - 1) ? 2u << __lg(x) : x;}
constexpr inline ull geq_pow2ll(const ull x) {return x & (x - 1) ? 2ull << __lg(x) : x;}
constexpr inline ll sqd(const pll p1, const pll p2) {return (p1.F - p2.F) * (p1.F - p2.F) + (p1.S - p2.S) * (p1.S - p2.S);}
constexpr inline ll sqd(const ll x1, const ll y1, const ll x2, const ll y2) {return (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);}

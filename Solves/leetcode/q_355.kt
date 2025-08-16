import java.util.*

class Twitter {
    val store = mutableMapOf<Int, LinkedList<Pair<Int, Int>>>()
    val users = mutableMapOf<Int, MutableSet<Int>>()
    var time = 0

    fun postTweet(userId: Int, tweetId: Int) {
        store.computeIfAbsent(userId) { LinkedList() }
        store[userId]!!.addFirst(Pair(time++, tweetId))
    }

    fun getNewsFeed(userId: Int): List<Int> {
        val heap = PriorityQueue<Pair<Int, Int>>(compareBy { it.first }) 
        fun addTweets(user: Int) {
            store[user]?.forEach { tweet ->
                heap.offer(tweet)
                if (heap.size > 10) {
                    heap.poll()
                }
            }
        }
        addTweets(userId)
        users[userId]?.forEach { followeeId -> addTweets(followeeId) }
        return heap.sortedByDescending { it.first }.map { it.second }
    }

    fun follow(followerId: Int, followeeId: Int) {
        if (followerId == followeeId) {
            return
        }
        users.computeIfAbsent(followerId) { mutableSetOf() }.add(followeeId)
    }

    fun unfollow(followerId: Int, followeeId: Int) {
        users[followerId]?.remove(followeeId)
    }
}

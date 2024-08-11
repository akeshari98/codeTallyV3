const redis = require('redis');
const redisClient = redis.createClient({
    host: '13.61.4.166',
    port: 6379, // Default Redis port
});

redisClient.on('ready', function() {
    console.log('Connected to Redis');
});

redisClient.on('error', function (err) {
    console.error('Redis Error:', err);
});

module.exports = {redisClient};

const express = require('express');
const mongoose = require('mongoose');
const cors = require('cors');

const app = express();
app.use(express.json());
app.use(cors());

// Connect to MongoDB
mongoose.connect('mongodb://localhost/ecommerce', {
    useNewUrlParser: true,
    useUnifiedTopology: true
});

const ProductSchema = new mongoose.Schema({
    name: String,
    price: Number,
    description: String,
    image: String
});
const Product = mongoose.model('Product', ProductSchema);

// API Routes
app.get('/products', async (req, res) => {
    const products = await Product.find();
    res.json(products);
});

app.listen(5000, () => console.log('Server running on port 5000'));


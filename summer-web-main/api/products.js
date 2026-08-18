import db from '../db.json';

export default function handler(req, res) {
  const { id } = req.query;

  if (id) {
    const product = db.products.find(p => p.id === id);

    if (!product) {
      return res.status(404).json({
        error: 'Product not found'
      });
    }

    return res.status(200).json(product);
  }

  return res.status(200).json(db.products);
}
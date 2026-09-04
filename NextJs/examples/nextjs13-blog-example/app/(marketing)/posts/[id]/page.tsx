import { posts } from "../../../../data/posts";
import styles from './page.module.css'
// import Link from 'next/link'


export async function generateStaticParams() {
    const ids: string[] = ["1", "2"]
    return ids.map(id => ({ id: id }))
}

async function getPost(id: string) {
    const post = posts.find((post) => post.id === id)
    return post
}

export default async function Posts({ params }: { params: { id: string } }) {
    const { id } = params
    const post = await getPost(id)

    return (
        <main className={styles.main}>
            <div className={styles.center}>
                <h1>{post!.title}</h1>
                <br />
                <p>{post!.date}</p>
            </div>
        </main>
    )
}